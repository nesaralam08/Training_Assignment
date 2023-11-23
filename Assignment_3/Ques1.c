#include<stdio.h>

int main()
{
    int n[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter any number:\t");
        scanf("%d",&n[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(n[i]>0)
        {
            printf("%d Positive\t",n[i]);
        }
        else if(n[i]==0)
        {
            printf("%d Zero\t",n[i]);
        }
        else{
            printf("%d Negative\t",n[i]);
        }
        printf("\n");
    }
}