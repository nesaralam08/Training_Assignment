#include<stdio.h>
#define n 0.621371
int main()
{
    float a,ans;
    printf("Input kilometers per hour: ");
    scanf("%f",&a);
    ans=(a*n);
    printf("\n\n%f miles per hour",ans);
}