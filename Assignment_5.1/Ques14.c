#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:\t");
    scanf("%d",&n);
    int rem,sum=0;
    while(n!=0)
    {
        rem = n%10;
        sum+=rem;
        n/=10;
    }
    printf("The sum is :%d",sum);
}