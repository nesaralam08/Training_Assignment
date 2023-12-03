#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,c=1;
    printf("Enter the size :\t");
    scanf("%d",&n);
    char bin[n+1],ones[n+1],twoComp[n+1];
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
            return -1;
        }
    }
    ones[n] ='\0';
    for(int i= n;i>=0;i--)
    {
        if(ones[i]=='1' && c==1)
        {
            twoComp[i]='0';
        }
        else if(ones[i]=='0' && c==1)
        {
            twoComp[i] ='1';
            c=0;
        }
        else{
            twoComp[i] = ones[i];
        }
    }
    twoComp[n]='\0';
    printf("Binary is :%s\n",bin);
    printf("1's is :%s\n",ones);
    printf("2's is :%s",twoComp);
}