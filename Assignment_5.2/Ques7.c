#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number:\t");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Factor %d is :%d\n",n,i);
        }
    }
}