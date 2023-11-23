#include<stdio.h>

void main()
{
    int n,i=1;
    printf("Enter the N :\t");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
}