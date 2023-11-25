#include<stdio.h>
#include<math.h>
void FindPrime(int a)
{
    int sum = 0;
    for(int i=0;i<a;i++)
    {
        int flag = 0;
        for(int j=2 ;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter N:\t");
    scanf("%d",&n);
    FindPrime(n);
}