#include<stdio.h>

int main()
{
    int sec,h,m,s;
    printf("Input seconds:");
    scanf("%d",&sec);
    h=(sec/3600);

    m=(sec-(h*3600));
    int min=m/60;
    s=(m-(min*60));
    printf("There are:");
    printf("\n\nH:M:S - %d:%d:%d",h,min,s);
}