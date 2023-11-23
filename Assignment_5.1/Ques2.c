#include<stdio.h>

void main()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    while(n!=0){
        printf("%d ",n);
        n--;
    }
}