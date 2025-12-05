
/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main(void)
{
    float cp, sp, diff, profit, loss;

    printf("Enter Cost price and Selling price: ");
    scanf("%d %d", &cp, &sp);

    if(sp > cp)
    {
        diff = sp - cp;
        profit = (diff / cp) * 100;
        printf("Profit : %.0f %%\n", profit);
    }
    else if(cp > sp)
    {
        diff = cp - sp;
        loss = (diff / cp) * 100;
        printf("Loss : %.0f %%\n", loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}