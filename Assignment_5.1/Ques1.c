#include<stdio.h>

void main()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
}