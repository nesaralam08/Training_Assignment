#include<stdio.h>


void PrintArm(int n)
{
    int rem,arm,temp;
    for(int i=1;i<=n;i++)
    {
        temp = i;
        arm = 0;
        while(temp!=0)
        {
            rem = temp%10;
            arm=arm+(rem*rem*rem);
            temp/=10;
        }
        if(arm==i)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the value of N:\t");
    scanf("%d",&n);
    PrintArm(n);
}