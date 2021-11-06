#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Program to find the average of n numbers using arrays
int main()
{
     int marks[10], i, n, sum = 0, average;
    

     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);
          
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d\n", average);
     
    printf("Values={");
     
     for(i=0;i<n;++i){
     	if(i==n-1){
     		printf("%d",marks[i]);		
		}else{
			printf("%d, ",marks[i]);	
		}
	 }
	 
	 printf("}\n");
	 
	 marks[11]=0;

     return 0;
}
