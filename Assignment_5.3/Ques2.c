#include<stdio.h>

void CheckPerfact(int x)
{
    int temp = 0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            temp+=i;
        }
    }
    if(temp==x)
    {
        printf("%d is Perfact Number",x);
    }
    else{
        printf("%d is not Perfact Number",x);
    }
}
int main()
{
    int n;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    CheckPerfact(n);
}