#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Test Characters:");
    scanf("%s",str);
    printf("\n\nThe reverse of %s is %s",str,strrev(str));
}