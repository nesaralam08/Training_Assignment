#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A:\t\nEnter B:\t");
    scanf("%d%d",&a,&b);
    if(a==3 && b==5)
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    if(a==3 || b==5)
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    if(a!=3)
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}