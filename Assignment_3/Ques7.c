#include<stdio.h>

int main()
{
    int n;
    printf("Enter the month:\t");
    scanf("%d",&n);
    if(n>12)
    {
        printf("Invalid Month");
    }
    if(n==2)
    {
        printf("29 Days");
    }
    else if(n%2==0)
    {
        if(n==8)
        {
            printf("31 Days");
        }
        else{
            printf("30 Days");
        }
    }
    else{
        printf("31 Days");
    }
}