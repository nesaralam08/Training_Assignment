#include<stdio.h>

int HCF(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x-=y;
        }
        else{
            y-=x;
        }
    }
    return x;
}
int main()
{
    int a,b;
    printf("Enter A and B:\t");
    scanf("%d%d",&a,&b);
    printf("The HCF is: %d",HCF(a,b));
}