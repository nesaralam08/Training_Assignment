#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
    }
    int ch;
    printf("\nEnter the position:\t");
    scanf("%d",&ch);
    for(int i=n;i>ch-1;i--)
    {
        arr[i] = arr[i-1];
    }
    int x;
    printf("Enter Data:\n");
    scanf("%d",&x);
    arr[ch-1] = x;
    printf("After Inserted:\n");
    for(int i =0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
}