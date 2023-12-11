#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Minimum is %d and Maximum is %d",min,max);
}