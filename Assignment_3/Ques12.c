#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter side 1:\t");
    scanf("%d",&a);
    printf("Enter side 2:\t");
    scanf("%d",&b);
    printf("Enter side 3:\t");
    scanf("%d",&c);
    if(a==b && b==c && a==c)
    {
        printf("Equilateral");
    }
    else if(a==b||b==c||a==c)
    {
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}