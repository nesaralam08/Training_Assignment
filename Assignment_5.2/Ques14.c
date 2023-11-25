#include<stdio.h>

void FindFactor(int x)
{
    int c=2;
    while(x>1)
    {
        if(x%c==0)
        {
            printf("%d ",c);
            x/=c;
        }
        else{
            c++;
        }
    }
}
int main()
{
    int n;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    FindFactor(n);
}