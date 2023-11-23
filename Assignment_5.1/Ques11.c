#include<stdio.h>

void main()
{
    int n;
    printf("Enter N :\t");
    scanf("%d",&n);
    printf("The last digit is :%d\n",(n%10));
    while(n>10)
    {
        n/=10;
    }
    printf("The First digit is :%d",n);
}