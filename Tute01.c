/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

    int mark1,mark2;
    float avg;

    printf("Enter the marks of first subject : "); //display a massage to input marks
    scanf("%d",&mark1); //store inputs

    printf("Enter the marks of second subject : ");//display a massage to input marks
    scanf("%d",&mark2); //store inputs

    avg = mark1 + mark2 /2; //calculatoin

    printf("Average of the two subject marks is : %.2f",avg); //display output

    
  
  return 0;
}

