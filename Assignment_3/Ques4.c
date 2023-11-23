#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any naracter:\t");
    scanf("%c",&ch);
    int n = (int)ch;
    if((n>=65 && n<=90) || (n>=97 && n<=122))
    {
        printf("Alphabet");
    }
    else if(n>48 && n<57)
    {
        printf("Digit");
    }
    else{
        printf("Special character");
    }
}