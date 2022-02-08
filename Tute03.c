/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int number,sum; //declare variables

  printf("Enter a number : ");
  scanf("%d",&number); //store inputs

  sum = number/2 * (2+(number-1)*1); //calculation

  printf("sum of the numbers from 1 to %d is: %d",number,sum); //display output
  
  return 0;
}

