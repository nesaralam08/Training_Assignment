#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    int max1 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1 && arr[i]<max)
        {
            max1 = arr[i];
        }
    }
    printf("Second Largest is :%d",max1);
}