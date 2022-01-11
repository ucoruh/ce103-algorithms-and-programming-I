/* ///////////////////////////////////////////////////////////////  */
/*  Program : nweb.c                                                */
/* ---------------------------------------------------------------  */
/*  This is a mini web server program originally written by         */
/*  Nigel Griffiths for Unix-based OS.                              */
/*                                                                  */
/*  The program is ported to Windows-based OS using Winsock API     */
/*  for a homework project for the class "Introduction to Computer  */
/*  Science" by Chun-Jen Tsai on 05/14/2008.                        */
/*                                                                  */
/*  Note:                                                           */
/*  This mini web server only serves out web pages and files        */
/*  located under the directory "c:/public_html".                   */
/* //////////////////////////////////////////////////////////////// */

#pragma comment(lib, "WS2_32.lib") /* program use socket library */
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <direct.h>
#include <winsock2.h>

#define BUFSIZE 8096
#define LOG_BUFSIZE (BUFSIZE<<1)
#define NW_ERROR 1
#define NW_SORRY 2
#define NW_LOG   3

struct
{
    char   *ext;
    char   *filetype;
}
extensions[] =
{
    {"gif", "image/gif"},
    {"jpg", "image/jpeg"},
    {"jpeg", "image/jpeg"},
    {"png", "image/png"},
    {"ico", "image/ico"},
    {"zip", "image/zip"},
    {"gz", "image/gz"},
    {"tar", "image/tar"},
    {"htm", "text/html"},
    {"html", "text/html"},
	{"css", "text/css"},
	{"js", "application/x-javascript"},
    {0, 0}
};

void
syslog(int type, char *s1, char *s2, int num)
{
    FILE *fp;
    static char log_buf[LOG_BUFSIZE+1];

    switch (type)
    {
    case NW_ERROR:
        sprintf(log_buf, "ERROR: %s:%s Errno = %d", s1, s2, errno);
        break;

    case NW_SORRY:
        sprintf(log_buf,
                "<HTML><BODY><H2>nweb Web Server: %s %s</H2></BODY></HTML>\r\n",
                s1, s2);
        send(num, log_buf, strlen(log_buf), 0);
        sprintf(log_buf, "SORRY: %s:%s", s1, s2);
        break;

    case NW_LOG:
        sprintf(log_buf, " INFO: %s:%s:%d", s1, s2, num);
        break;
    }

    /* write event data to the log file 'nweb.syslog' */
    if ((fp = fopen("nweb.syslog", "a")) != NULL)
    {
        strncat(log_buf, "\n", LOG_BUFSIZE);
        fprintf(fp, log_buf);
        fclose(fp);
    }

    if (type == NW_ERROR || type == NW_SORRY)
    {
        WSACleanup();
        exit(1);
    }
}

/* web() handles a single web request, so it's ok to exit on errors */
void
web(SOCKET cli_socket, int hit)
{
    FILE   *fp;
    int     j, buflen, len;
    long    idx, nbytes;
    char   *fstr;
    static char buffer[BUFSIZE + 1];

    /* read the web browser request through the TCP connection */
    nbytes = recv(cli_socket, buffer, BUFSIZE, 0);

    if (nbytes == 0 || nbytes == -1)
    {   /* read failure, stop now */
        syslog(NW_SORRY, "failed to read browser request", "", cli_socket);
    }

    /* check and see if we do get a request from the browser, */
    if (nbytes > 0 && nbytes < BUFSIZE)
    {
        buffer[nbytes] = 0;  /* conclude the buffer */
    }
    else
    {
        buffer[0] = 0; /* empty the buffer */
    }

    /* remove CF and LF characters */
    for (idx = 0; idx < nbytes; idx++)
    {
        if (buffer[idx] == '\r' || buffer[idx] == '\n')
        {
            buffer[idx] = '*';
        }
    }

    syslog(NW_LOG, "request", buffer, hit);

    if (strncmp(buffer, "GET ", 4) && strncmp(buffer, "get ", 4))
    {
        syslog(NW_SORRY, "Only simple GET method is supported",
            buffer, cli_socket);
    }

    /* null-terminate after the second space to ignore extra stuff */
    for (idx = 4; idx < BUFSIZE; idx++)
    {
        if (buffer[idx] == ' ')
        {
            /* string is "GET URL " +lots of other stuff */
            buffer[idx] = 0;
            break;
        }
    }

    /* check for illegal parent directory use .. */
    for (j = 0; j < idx - 1; j++)
    {
        if (buffer[j] == '.' && buffer[j+1] == '.')
        {
            syslog(NW_SORRY,
                   "Parent directory (..) path names not supported",
                   buffer, cli_socket);
        }
    }

    /* convert no filename to index file */
    if (!strncmp(&buffer[0], "GET /\0", 6) || !strncmp(&buffer[0], "get /\0", 6))
    {
        strncpy(buffer, "GET /index.html", BUFSIZE);
    }

    /* work out the file type and check if we support it */
    buflen = strlen(buffer);
    fstr = (char *) 0;
    for (idx = 0; extensions[idx].ext != 0; idx++)
    {
        len = strlen(extensions[idx].ext);
        if (!strncmp(&buffer[buflen - len], extensions[idx].ext, len))
        {
            fstr = extensions[idx].filetype;
            break;
        }
    }

    if (fstr == 0)
    {
        syslog(NW_SORRY, "file type not supported", buffer, cli_socket);
    }

    /* execute the send command, but first check if the browser */
    /* has requested the default icon file, favicon.ico.        */
    if (!strncmp(buffer+5, "/favicon.ico", 12))
    {
        /* Send a null file to satisfy a request for favicon.ico */
        sprintf(buffer, "HTTP/1.0 204 NO CONTENT\r\n\r\n");
        send(cli_socket, buffer, strlen(buffer), 0);
    }
    else
    {
        /* open the file for reading */
        if ((fp = fopen(&buffer[5], "rb")) == NULL)
        {
            syslog(NW_SORRY, "failed to open file", &buffer[5], cli_socket);
        }

        syslog(NW_LOG, "SEND", &buffer[5], hit);

        sprintf(buffer, "HTTP/1.0 200 OK\r\nContent-Type: %s\r\n\r\n", fstr);
        send(cli_socket, buffer, strlen(buffer), 0);

        /* send file in 8KB block - last block may be smaller */
        while ((nbytes = fread(buffer, 1, BUFSIZE, fp)) > 0)
        {
            send(cli_socket, buffer, nbytes, 0);
        }
    }
}

int
main(int argc, char **argv)
{
    WSADATA wsaData;
    SOCKET  listenfd, socketfd;
    static struct sockaddr_in cli_addr;  /* static = initialised to zeros */
    static struct sockaddr_in serv_addr; /* static = initialised to zeros */
    unsigned short port;
    int     idx, hit;
    size_t  length;
	int length_i;

    if (argc > 1 && !strcmp(argv[1], "-?"))
    {
        printf("nweb is a mini web server.\n"
               "nweb only serves out files and web pages with\n"
               "the following extensions:\n");
        for (idx = 0; extensions[idx].ext != 0; idx++)
        {
            printf(" %s", extensions[idx].ext);
        }
        printf("\nThe web pages/files must locate in the directory\n");
        printf("'c:\\public_html' or its sub-directories.\n");
        exit(0);
    }

    if (_chdrive(3) || _chdir("\\public_html"))
    {
        printf("ERROR: Can't Change to directory c:\\public_html\n");
        exit(1);
    }

    /* Initialize the Winsock system library */
    if (WSAStartup(MAKEWORD(2,2), &wsaData) != 0)
    {
        syslog(NW_ERROR, "system call", "WSAStartup", 0);
        return 0;
    }

    printf("============================\n");
    printf(" nweb Web server is running\n");
    printf("============================\n");
    syslog(NW_LOG, "nweb starting", argv[1], 0);

    /* setup the network socket */
    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        syslog(NW_ERROR, "system call", "socket", 0);
    }

    /* listen to the standard HTTP port 80 */
    port = 8090;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(port);

    if (bind(listenfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("ERROR: Can't bind a socket to port 80, another ");
        printf("server is running?\n");
        syslog(NW_ERROR, "system call", "bind", 0);
    }

    if (listen(listenfd, 64) < 0)
    {
        syslog(NW_ERROR, "system call", "listen", 0);
    }

    /* An infinitive loop to process requests from each client. */
    for (hit = 1; ; hit++)
    {
        length = sizeof(cli_addr);
		length_i = length;
        socketfd = accept(listenfd, (struct sockaddr *) &cli_addr, &length_i);
        if (socketfd < 0)
        {
            syslog(NW_ERROR, "system call", "accept", 0);
        }

        /* call web() to process one HTTP request */
        web(socketfd, hit);
        shutdown(socketfd, SD_BOTH);
    }
}
