#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n\n%d==%d is evaluated to %d\n",a,b,(a==b));
    printf("%d>%d is evaluated to %d\n",a,b,(a>b));
    printf("%d<%d is evaluated to %d\n",a,b,(a<b));
    printf("%d!=%d is evaluated to %d\n",a,b,(a!=b));
    printf("%d>=%d is evaluated to %d\n",a,b,(a>=b));
    printf("%d<=%d is evaluated to %d\n",a,b,(a<=b));
}