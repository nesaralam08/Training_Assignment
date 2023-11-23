#include<stdio.h>

int main()
{
    int p;
    float si,r,t;
    printf("Enter principle amount: ");
    scanf("%d",&p);
    printf("\nEnter time in years: ");
    scanf("%f",&t);
    printf("\nEnter rate of interest: ");
    scanf("%f",&r);

    si=(p*r*t)/100;

    printf("\n\nSimple Interest is :%.2f",si);
}