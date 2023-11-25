#include<stdio.h>

int main()
{
    int n;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    int rem,rev=0;
    while(n!=0)
    {
        rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
    }
    printf("The Reverse is :%d",rev);
}