#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:\t");
    scanf("%d",&n);
    int rem,mul=1;
    while(n!=0)
    {
        rem = n%10;
        mul = mul*rem;
        n/=10;
    }
    printf("The mul is :%d",mul);
}