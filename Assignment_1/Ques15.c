#include<stdio.h>
#define n 2
int main()
{
    float w[n],item[n];
    for(int i=0;i<n;i++)
    {
        printf("Weight-Item%d:\t",(i+1));
        scanf("%f",&w[i]);
        printf("\nNo. of item %d:",(i+1));
        scanf("%f",&item[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+w[i];
    }
    float avg=sum/n;
    printf("\n\nAverage Value = %f",avg);
}