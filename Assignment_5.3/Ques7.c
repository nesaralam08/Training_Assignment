#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,e=0;
    printf("Enter the size :\t");
    scanf("%d",&n);
    char bin[n+1],ones[n+1];
    printf("Enter Binary Number:\t");
    fflush(stdin);
    gets(bin);
    for(int i=0;i<n;i++)
    {
        if(bin[i]=='0')
        {
            ones[i] = '1';
        }
        else if(bin[i]=='1')
        {
            ones[i]='0';
        }
        else{
            printf("Invalid !!");
            e=1;break;
        }
    }
    ones[n] ='\0';
    if(e==0)
    {
        printf("Binary is :%s\n",bin);
        printf("Compliment is :%s",ones);
    }
}