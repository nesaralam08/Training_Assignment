#include<stdio.h>

int main()
{
    int n;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial is :%d",fact);
}