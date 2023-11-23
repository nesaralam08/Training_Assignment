#include<stdio.h>

int main()
{
    int a;
    printf("Enter year to check leap or not:");
    scanf("%d",&a);

    (a%4==0 || a%400==0 && a%100!=0)?printf("%d is leap year",a):printf("%d is not leap year",a);
}