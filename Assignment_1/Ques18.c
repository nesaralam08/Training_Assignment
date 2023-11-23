#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two positive integers:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter Swap a=%d and b=%d",a,b);
}