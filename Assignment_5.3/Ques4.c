#include<stdio.h>

int Fact(int x){
    int f =1;
    for(int i=1;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
void CheckStrong(int n)
{
    int m = n;
    int rem,ans=0;
    while(n!=0)
    {
        rem = n%10;
        ans = ans+Fact(rem);
        n/=10;
    }
    if(m==ans)
    {
        printf("%d is strong number",m);
    }
    else{
        printf("%d is not strong number");
    }
}
int main()
{
    int n;
    printf("Enter any positive number to check strong or not:\t");
    scanf("%d",&n);
    CheckStrong(n);
}