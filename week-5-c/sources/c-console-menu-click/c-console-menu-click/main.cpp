#include <iostream>
#include <stdio.h>
#include <windows.h>


HANDLE hStdin; 
DWORD fdwSaveOldMode;

void ErrorExit(LPSTR);
void KeyEventProc(KEY_EVENT_RECORD); 
void MouseEventProc(MOUSE_EVENT_RECORD); 
void ResizeEventProc(WINDOW_BUFFER_SIZE_RECORD);
void GetMousePosWin(MOUSE_EVENT_RECORD);
void gotoXY(int x, int y);

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int main() 
{ 
    DWORD cNumRead, fdwMode, i; 
    INPUT_RECORD irInBuf[128]; 
    int counter=0;

    // Get the standard input handle. 

    hStdin = GetStdHandle(STD_INPUT_HANDLE); 
    if (hStdin == INVALID_HANDLE_VALUE) 
        ErrorExit("GetStdHandle"); 

    // Save the current input mode, to be restored on exit. 

    if (! GetConsoleMode(hStdin, &fdwSaveOldMode) ) 
        ErrorExit("GetConsoleMode"); 

    // Enable the window and mouse input events. 

    fdwMode = ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT; 
    if (! SetConsoleMode(hStdin, fdwMode) ) 
        ErrorExit("SetConsoleMode"); 

    // Loop to read and handle the next 100 input events. 
    gotoXY(33,10);
    std::cout << "\xDB Menu Item 1";
    gotoXY(33,12);
    std::cout << "\xDB Menu Item 2";
    gotoXY(33,14);
    std::cout << "\xDB Menu Item 3";
    gotoXY(33,16);
    std::cout << "\xDB Quit";
    while (!counter)//++ <= 200) 
    { 
        // Wait for the events. 

        if (! ReadConsoleInput( 
            hStdin,      // input buffer handle 
            irInBuf,     // buffer to read into 
            128,         // size of read buffer 
            &cNumRead) ) // number of records read 
            ErrorExit("ReadConsoleInput"); 

        // Dispatch the events to the appropriate handler. 

        for (i = 0; i < cNumRead; i++) 
        {
            switch(irInBuf[i].EventType) 
            { 
            case KEY_EVENT: // keyboard input 
                KeyEventProc(irInBuf[i].Event.KeyEvent); 
                break; 

            case MOUSE_EVENT: // mouse input 
                MouseEventProc(irInBuf[i].Event.MouseEvent);
                gotoXY(33,8);
                GetMousePosWin(irInBuf[i].Event.MouseEvent);
                break; 

            case WINDOW_BUFFER_SIZE_EVENT: // scrn buf. resizing 
                ResizeEventProc( irInBuf[i].Event.WindowBufferSizeEvent );
                break; 

            case FOCUS_EVENT:  // disregard focus events 

            case MENU_EVENT:   // disregard menu events 
                break; 

            default: 
                ErrorExit("Unknown event type"); 
                break; 
            } 
        }
    } 

    // Restore input mode on exit.

    SetConsoleMode(hStdin, fdwSaveOldMode);

    return 0; 
}

VOID ErrorExit (LPSTR lpszMessage) 
{ 
    fprintf(stderr, "%s\n", lpszMessage); 

    // Restore input mode on exit.

    SetConsoleMode(hStdin, fdwSaveOldMode);

    ExitProcess(0); 
}

VOID KeyEventProc(KEY_EVENT_RECORD ker)
{
    printf("Key event: ");

    if(ker.bKeyDown)
        printf("key pressed");
    else printf("key released");
}

VOID MouseEventProc(MOUSE_EVENT_RECORD mer)
{
#ifndef MOUSE_HWHEELED
#define MOUSE_HWHEELED 0x0008
#endif

    gotoXY(33,6);
    printf("Mouse event:                                               ");

    switch(mer.dwEventFlags)
    {

    case 0:
        if(mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            gotoXY(46,6);
            printf("left button pressed");
        }
        else if(mer.dwButtonState == RIGHTMOST_BUTTON_PRESSED)
        {
            gotoXY(46,6);
            printf("right button pressed");
        }
        else
        {
            gotoXY(46,6);
            printf("button press");
        }
        break;
    case DOUBLE_CLICK:
        gotoXY(46,6);
        printf("double click");
        break;
    case MOUSE_HWHEELED:
        gotoXY(46,6);
        printf("horizontal mouse wheel");
        break;
    case MOUSE_MOVED:
        gotoXY(46,6);
        printf("mouse moved");
        //gotoXY(12,13);
        //GetMousePosWin();
        break;
    case MOUSE_WHEELED:
        gotoXY(46,6);
        printf("vertical mouse wheel");
        break;
    default:
        gotoXY(46,6);
        printf("unknown");
        break;
    }

}

// get Window pos through windows api
void GetMousePosWin(MOUSE_EVENT_RECORD mer)
{
    int x,y;
    // creates the handle i need to use
    //HANDLE OutputH;
    INPUT_RECORD Inrec;
    DWORD evRead;
    HANDLE hStdIn;
    DWORD dwMode;
    bool Captured=false;

    hStdIn = GetStdHandle(STD_INPUT_HANDLE);
    dwMode = ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;

    if( SetConsoleMode( hStdIn, dwMode | ENABLE_MOUSE_INPUT) == TRUE)

        GetConsoleMode(hStdIn, &dwMode);
        SetConsoleMode(hStdIn, (dwMode & (ENABLE_MOUSE_INPUT)));

        // grab the handle to the console so i can use it
        //OutputH = GetStdHandle(STD_OUTPUT_HANDLE);
        //printf("Strated"); //Debug line.

        do
        {
            PeekConsoleInput(hStdIn, &Inrec, 1, &evRead);

            if( evRead ) 
            { 
                ReadConsoleInput(hStdIn, &Inrec, 1, &evRead);
                x= Inrec.Event.MouseEvent.dwMousePosition.X ;
                y= Inrec.Event.MouseEvent.dwMousePosition.Y ;
                switch (Inrec.EventType )
                {

                case MOUSE_EVENT:
                    {
                        Captured = true;
                        gotoXY(33,8);
                        std::cout << "x->  " << x << " ";
                        gotoXY(43,8);
                        std::cout << "y->  " << y << " ";
                        break;  
                    }
                }
            }

        }while(!Captured);

    if((x==33 && y==10) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
    {
        gotoXY(47,10);
        std::cout << "\xFB";
        gotoXY(33,21);
        std::cout << "You picked menu one";
        Sleep(1200);
        gotoXY(47,10);
        std::cout << " ";
        gotoXY(33,21);
        std::cout << "                   ";
    }
    if((x==33 && y==12) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
    {
        gotoXY(47,12);
        std::cout << "\xFB";
        gotoXY(33,21);
        std::cout << "You picked menu two";
        Sleep(1200);
        gotoXY(47,12);
        std::cout << " ";
        gotoXY(33,21);
        std::cout << "                   ";
    }
    if((x==33 && y==14) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
    {
        gotoXY(47,14);
        std::cout << "\xFB";
        gotoXY(33,21);
        std::cout << "You picked menu three";
        Sleep(1200);
        gotoXY(47,14);
        std::cout << " ";
        gotoXY(33,21);
        std::cout << "                     ";
    }
    if((x==33 && y==16) && mer.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
    {
        gotoXY(40,16);
        std::cout << "\xFB";
        gotoXY(33,21);
        std::cout << "You picked Quit";
        Sleep(1200);
        gotoXY(40,16);
        std::cout << " ";
        gotoXY(28,21);
        exit(0);
    }
}

VOID ResizeEventProc(WINDOW_BUFFER_SIZE_RECORD wbsr)
{
    printf("Resize event\n");
    printf("Console screen buffer is %d columns by %d rows.\n", wbsr.dwSize.X, wbsr.dwSize.Y);
}

void gotoXY(int x, int y) 
{ 
    CursorPosition.X = x; 
    CursorPosition.Y = y; 
    SetConsoleCursorPosition(console,CursorPosition); 
}