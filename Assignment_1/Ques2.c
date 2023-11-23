#include<stdio.h>

int main()
{
    int a;
    float b;
    char ch;
    scanf("%d",&a);
    scanf("%f",&b);
    fflush(stdin);
    scanf("%c",&ch);
    printf("%d\n\n",a);
    printf("%.2f\n\n",b);
    printf("%c",ch);
}