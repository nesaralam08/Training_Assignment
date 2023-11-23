#include<stdio.h>

void main()
{
    int n;
    printf("Enter N :\t");
    scanf("%d",&n);
    int a = (n%10);
    while(n>10)
    {
        n/=10;
    }
    printf("The sum of first and last digit is :%d",n+a);
}