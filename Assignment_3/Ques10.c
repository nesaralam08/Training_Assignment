#include<stdio.h>
#define N 2
int main()
{
    int l[2],w[2],ans[2],i=0;
    for(int i=0;i<N;i++)
    {
        printf("Enter length:\t");
        scanf("%d",&l[i]);
        printf("Enter width:\t");
        scanf("%d",&w[i]);
        ans[i] = l[i]*w[i];
    }
    if(ans[i]>ans[i+1])
    {
        printf("\n\nGreatest rectangle\n");
        printf("Length is %d\n",l[i]);
        printf("Width is :%d",w[i]);
    }
    else
    {
        printf("\n\nGreatest rectangle\n");
        printf("Length is %d\n",l[i+1]);
        printf("Width is :%d",w[i+1]);
    }
}