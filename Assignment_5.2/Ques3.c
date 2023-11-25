#include<stdio.h>

int main()
{
    int n;
    printf("Enter size :\t");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int x = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                x++;
            }
        }
        printf("Frequency of %d id %d\n",arr[i],x);
    }
}