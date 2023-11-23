#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))?printf("%c is an Alphabet",ch):printf("%c is not Alphabet",ch); 
}