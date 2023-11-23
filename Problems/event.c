#include<stdio.h>
#include<limits.h>

int main()
{
    int t,in[10],out[50];
    int max =INT_MIN,sum=0;
    printf("Enter the time in hours:\t");
    scanf("%d",&t);
    printf("\n\nStudent IN && OUT Details\n\n");
    for(int i=0;i<t;i++)
    {
        printf("How Many Students IN %d hour in the event:\t",(i+1));
        scanf("%d",&in[i]);
        printf("\nHow Many Students OUT %d hour in the event:\t\n",(i+1));
        scanf("%d",&out[i]);
    }
    for(int i=0;i<t;i++)
    {
        sum = ((sum+in[i])-out[i]);
        if(sum>max)
        {
            max = sum;
        }
    }
    printf("Output is %d",max);
}