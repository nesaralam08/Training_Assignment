#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int t=(a+b+c+d+e);
    float avg=t/5;
    int per=t/5;
    printf("\n\nTotal=%d",t);
    printf("\n\nAverage=%d",per);
    printf("\n\nPercentage=%.2f",avg);
}