#include<stdio.h>
int main()
{
    int n;
    printf("Enter the bill:\t");
    scanf("%d",&n);
    if(n<=50)
    {
        int b = n*0.50;
        float charg = (b*20)/100;
        float t = b+charg;
        printf("Unit %d \tBill %.2f",n,t);
    }
    else if(n<=100 && n>50)
    {
        int b = n*0.75;
        float charg = (b*20)/100;
        float t = b+charg;
        printf("Unit %d \tBill %.2f",n,t);
    }
    else if(n<=250 && n>100)
    {
        int b = n*1.20;
        float charg = (b*20)/100;
        float t = b+charg;
        printf("Unit %d \tBill %.2f",n,t);
    }
    else{
        int b = n*1.50;
        float charg = (b*20)/100;
        float t = b+charg;
        printf("Unit %d \tBill %.2f",n,t);
    }
}