#include<stdio.h>

int main()
{
    int a,b,max;
    printf("Enter 2 Numbers:\t");
    scanf("%d%d",&a,&b);

    max = (a>b) ? a : b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("Lcm is :%d",max);break;
        }
        max++;
    }
}