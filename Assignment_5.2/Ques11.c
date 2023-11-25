#include<stdio.h>
#include<math.h>
void FindPrime(int a)
{
    int flag = 0;
    for(int i=2 ;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d not is Prime",a);
    }
    else{
        printf("%d is Prime",a);
    }
}
int main()
{
    int n;
    printf("Enter any positive integer:\t");
    scanf("%d",&n);
    FindPrime(n);
}