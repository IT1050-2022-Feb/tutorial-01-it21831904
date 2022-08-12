/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  	int mark1, mark2;
	int avg;
	
	mark1= 60;
	mark2= 50;
	
	avg=mark1 + mark2/2;
	printf("Average of two marks is %d",avg);
  
  return 0;
}

