//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main(void)
{
    int num1, num2, sum, diff, prod, quot;

    do
    {
        printf("Enter First Number: ");
        scanf("%i", &num1);
    
        printf("Enter Second Number: ");
        scanf("%i", &num2);
    } 
    while (num2 <= 0);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;

    printf("The Sum is: %i\n", sum);
    printf("The Difference is: %i\n", diff);
    printf("The Product is: %i\n", prod);
    printf("The Quotient is: %i\n", quot);
    
    return 0;
    
}