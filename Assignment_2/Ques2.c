#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("A is maximum"):(b>c)?printf("B is maximum"):printf("C is maximum");
}