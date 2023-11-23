#include<stdio.h>

void main()
{
    int n,rem,s=0;
    printf("Enter N:\t");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        s++;
        n = n/10;
    }
    printf("The digit is :%d",s);
}