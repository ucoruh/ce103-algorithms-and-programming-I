#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    //int num;
    //int result = 0;
    //FILE* fptr;
    //char fileName[] = "C:\\Users\\ugur.coruh\\Desktop\\CE103-W6\\FileExample.txt";
    char fileName[] = "C:\\Users\\ugur.coruh\\Desktop\\CE103-W6\\FileStruct.bin";

    //// use appropriate location if you are using MacOS or Linux
    //fptr = fopen((const char*)fileName, "a");
    //if (fptr == NULL)
    //{
    //    printf("Error!");
    //    exit(1);
    //}

    //printf("Enter num: ");

    //result = scanf("%d", &num);

    //result = fprintf(fptr, "%d", num);
    //fclose(fptr);


    //if ((fptr = fopen((const char*)fileName, "r")) == NULL) {
    //    printf("Error! opening file");
    //    // Program exits if the file pointer returns NULL.
    //    exit(1);
    //}

    //fscanf(fptr, "%d", &num);

    //printf("Value of n=%d", num);

    //fclose(fptr);

    int n;
    struct threeNum num;
    FILE* fptr;

    //if ((fptr = fopen((const char*)fileName, "wb")) == NULL) {
    //    printf("Error! opening file");

    //    // Program exits if the file pointer returns NULL.
    //    exit(1);
    //}

    //for (n = 1; n < 5; ++n)
    //{
    //    num.n1 = n;
    //    num.n2 = 5 * n;
    //    num.n3 = 5 * n + 1;
    //    fwrite(&num, sizeof(struct threeNum), 1, fptr);
    //}

    //fclose(fptr);


    if ((fptr = fopen((const char*)fileName, "rb")) == NULL) {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    //for (n = 1; n < 5; ++n)
    //{
    //    fread(&num, sizeof(struct threeNum), 1, fptr);
    //    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    //}

    //fclose(fptr);

    // Moves the cursor to the end of the file
    fseek(fptr, -1*sizeof(struct threeNum), SEEK_END);

    for (n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        fseek(fptr, -2 * sizeof(struct threeNum), SEEK_CUR);
    }
    fclose(fptr);

    
    return 0;
}