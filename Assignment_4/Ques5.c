#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive integer\t");
    scanf("%d",&n);
    int ans = n%2==0;
    switch(ans)
    {
        case 0:
            printf("%d is odd",n);break;
        case 1:
            printf("%d is even",n);break;    
    }
}