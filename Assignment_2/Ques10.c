#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter %d digit :\t",(i+1));
        scanf("%d",&a[i]);
    }
    printf("\n\nThe Given Four Digits are:\n\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\t",a[i]);
    }
}