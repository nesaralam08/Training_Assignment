#include<stdio.h>

int main()
{
    int n;
    printf("Enter any positive number:\t");
    scanf("%d",&n);
    int m = n;
    int rem,rev=0;
    while(n!=0)
    {
        rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
    }
    if(m==rev)
    {
        printf("%d is a palindrome number",m);
    }
    else{
        printf("%d is a not palindrome number",m);
    }
}