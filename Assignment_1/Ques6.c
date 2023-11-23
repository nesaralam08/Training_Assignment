#include<stdio.h>

int main()
{
    int min,h,m;
    printf("Input minutes:");
    scanf("%d",&min);
    printf("%d Hours, %d Minutes",(min/60),(min%60));
}