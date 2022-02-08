/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance,amount; //declare variables

  printf("Enter the travelled distance(km) : "); //getting inputs
  scanf("%d",&distance); //store input

   if(distance<30) //apply conditions
    {
      amount = distance*50; //calculation
    }
    
   else
    {
      distance = distance - 30;
      amount = (50*30) + distance * 40; //calculation
    }

  printf("Total amount to be paid : %d",amount); //displya final output
  
  return 0;
}
