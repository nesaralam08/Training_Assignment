#include<stdio.h>

void CheckPerfact(int x)
{
    int temp;
    for(int j=1;j<=x;j++)
    {
        temp = 0;
        for(int i=1;i<j;i++)
        {
            if(j%i==0)
            {
                temp+=i;
            }
        }
        if(temp==j)
        {
            printf("%d\t",j);
        }
    }
}
int main()
{
    int n;
    printf("Enter Nth Term:\t");
    scanf("%d",&n);
    CheckPerfact(n);
}