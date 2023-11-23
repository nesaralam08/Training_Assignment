#include<stdio.h>

int main()
{
    int day;
    printf("Number of days: ");
    scanf("%d",&day);
    int y=(day/365);
    int w=(day%365)/7;
    int d=(day-((y*365)+(w*7)));
    printf("Years:%d\n",y);
    printf("Weeks:%d\n",w);
    printf("Days:%d",d);
}