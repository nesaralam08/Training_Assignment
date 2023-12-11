#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int arr[n];
    int odd = 0;
    int even = 0;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    printf("Total Even :%d and Total Odd:%d",even,odd);
}