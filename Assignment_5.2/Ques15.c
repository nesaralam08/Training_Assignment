#include<stdio.h>

int main()
{
    int n,rem,arm=0;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    int m = n;
    while(n!=0)
    {
        rem = n%10;
        arm = arm+(rem*rem*rem);
        n/=10;
    }
    if(arm==m)
    {
        printf("%d is Armstrong number",m);
    }
    else
    {
        printf("%d is not Armstrong number",m);
    }
}