#include<stdio.h>
#define N 5
int main()
{
    int ar[N];
    int sum = 0,diff = 0;
    for(int i=0;i<N;i++)
    {
        printf("Enter %d Digit:\t",(i+1));
        scanf("%d",&ar[i]);
        sum+=ar[i];
        diff-=ar[i];
    }
    printf("\nThe sum is :%d\n",sum);
    printf("The difference is :%d",diff);
}