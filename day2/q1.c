//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>

int main(void)
{
    int l, b, area, peri;
    
    printf("Length: ");
    scanf("%i", &l);
    printf("Breadth: ");
    scanf("%i", &b);

    area = l * b;
    peri = 2 * (l + b);
    
    printf("Area: %i\n", area);
    printf("Perimeter: %i\n", peri);

    return 0;
}