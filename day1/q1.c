//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int sum;
    
    printf("Enter First Number: ");
    scanf("%i", &num1);
    
    printf("Enter Second Number: ");
    scanf("%i", &num2);
    
    sum = num1 + num2;
    printf("The Sum is: %i\n", sum);

    return 0;
}
