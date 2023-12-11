#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            cnt++;
        }
    }
    printf("Total Negative Number:%d",cnt);
}