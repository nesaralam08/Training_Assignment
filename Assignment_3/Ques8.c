#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the angles the triangle:\t");
    scanf("%d%d%d",&a,&b,&c);
    int sum = (a+b+c);
    if(sum<=180)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}