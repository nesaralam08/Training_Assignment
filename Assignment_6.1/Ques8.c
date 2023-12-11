#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    int NewArr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
        NewArr[i] = arr[i];
    }
    printf("Copied Array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",NewArr[i]);
    }
}