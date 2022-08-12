/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

#include <stdio.h>

//function declaration
int max(int num1, int num2);
int min(int num1, int num2);
int multiplytwo (int num1 ,int num2);


int main() 
{
    int num1, num2, maximum, minimum, multiply;
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    multiply= (num1*num2);
    
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    printf("multiply =%d",multiply);
    return 0;
}
//find max
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
 // find min
int min(int num1, int num2) 
{
    return (num1 > num2 )? num2 : num1;
}
int multiply (num1, num2)
{
	return (num1 * num2);		
}