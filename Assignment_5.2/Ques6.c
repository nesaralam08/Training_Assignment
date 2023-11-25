#include<stdio.h>

int main()
{
    int n,p;
    printf("Enter any number:\t");
    scanf("%d",&n);
    printf("Enter power:\t");
    scanf("%d",&p);
    int ans=1;
    for(int i=0;i<p;i++)
    {
        ans*=n;
    }
    printf("The ans is :%d",ans);
}