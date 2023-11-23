#include<stdio.h>

void main()
{
    int i=1,n;
    printf("Enter N :\t");
    scanf("%d",&n);
    int sum=0;
    while(i<=n){
        if(i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    printf("The sum is :%d",sum);
}