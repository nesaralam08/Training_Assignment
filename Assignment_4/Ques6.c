#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\t");
    scanf("%d",&n);
    int ans = n>0;
    switch(ans)
    {
        case 0:
            printf("%d is negative",n);break;
        case 1:
            printf("%d is positive",n);break;
        default:
            printf("Zero");        
    }
}