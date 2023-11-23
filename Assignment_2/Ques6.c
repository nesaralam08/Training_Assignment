#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n\nAfter swap A is %d and B is %d",a,b);
}