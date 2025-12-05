//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/


#include<stdio.h>
#include<math.h>

int main(void)
{
    int a, b, c;
    float D, root1, root2;

    printf("Enter quadratic equation: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    D = pow(b, 2) - 4 * a * c;
    
    if(D > 0)
    {
        D = sqrt(D);
        root1 = (-b + D) / (2 * a);
        root2 = (-b - D) / (2 * a);
        printf("Roots are real and different: %.1f, %.1f\n", root1, root2);
    }
    else if(D == 0)
    {
        D = sqrt(D);
        root1 = (-b + D) / (2 * a);
        printf("Roots are real and equal: %.1f\n", root1);
    }
    else if(D < 0)
    {
        printf("Roots are complex\n");
    }

    return 0;
}