#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Program to find the average of n numbers using arrays
int main()
{
    int marks[10], i, n, sum = 0, average;
    int* average_p;

    int* pc;
    int c;

    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    // Output: 1
    printf("%d", *pc);  // Ouptut: 1

    printf("address of average: %p", &average);

    average_p = &average;

    printf("Enter number of elements: ");
    scanf_s("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf_s("%d", &marks[i]);

        // adding integers entered by the user to the sum variable
        sum += marks[i];
    }

    average = sum / n;
    printf("Average = %d\n", average);
    printf("Average P %d\n", *average_p);

    printf("Values={");

    for (i = 0; i < n; ++i) {
        if (i == n - 1) {
            printf("%d", marks[i]);
        }
        else {
            printf("%d, ", marks[i]);
        }
    }

    printf("}\n");

    marks[11] = 0;

    return 0;
}