#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
    }
    printf("All negative numbers are:\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
    }
}