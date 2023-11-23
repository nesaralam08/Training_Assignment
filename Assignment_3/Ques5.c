#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any naracter:\t");
    scanf("%c",&ch);
    int n = (int)ch;
    if(n>=65 && n<=90)
    {
        printf("Uppercase");
    }
    else if(n>=97 && n<=122)
    {
        printf("Lowercase");
    }
    else{
        printf("Invalid Character");
    }
}