#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter two positive integer:\t");
    scanf("%d%d",&n,&m);
    int ans = n>m;
    switch(ans)
    {
        case 0:
            printf("%d is Greatest\n",m);break;
        case 1:
            printf("%d is Greatest",n);break;
    }
}