//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/


#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three number seperated by spaces: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c)
    {
        printf("%i is the largest\n", a);
    }
    else if(b > c && b > a)
    {
        printf("%i is the largest\n", b);
    }
    else if(c > b && c > a)
    {
        printf("%i is the largest\n", c);
    }

    return 0;
}
