#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number:\t");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
}