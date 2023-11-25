#include<stdio.h>
void PrintInWord(int x)
    {
        if(x==0)
        {
            printf("Zero\n");
        }
        else if(x==1)
        {
            printf("One \n");
        }
        else if(x==2)
        {
            printf("Two \n");
        }
        else if(x==3)
        {
            printf("Three \n");
        }
        else if(x==4)
        {
            printf("Four \n");
        }
        else if(x==5)
        {
            printf("Five \n");
        }
        else if(x==6)
        {
            printf("Six \n");
        }
        else if(x==7)
        {
            printf("Seven \n");
        }
        else if(x==8)
        {
            printf("Eight \n");
        }
        else if(x==9)
        {
            printf("Nine \n");
        }
    }
int main()
{
    int n,i=0,rem;
    printf("Enter any number:\t");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        PrintInWord(rem);
        n/=10;
    }
}