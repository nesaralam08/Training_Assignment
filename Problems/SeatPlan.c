#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,x;
    scanf("%d",&t);
    int arr[100];
    for(int i =0 ;i<t;i++)
    {
        scanf("%d",&arr[i]);
        x = arr[i];
        int m = x%12;
        if(m==1 ||m==6)
        {
            if(m==1)
            {
                x = x+11;
                printf("WS %d\n",x);
            }
            if(m==6)
            {
                x = x+1;
                printf("WS %d\n",x);
            }
        }
        else if(m==2 ||m==5)
        {
            
            if(m==2)
            {
                x = x+10;
                printf("MS %d\n",x);
            }
            if(m==5)
            {
                x = x+3;
                printf("MS %d\n",x);
            }
        }
        else if(m==3 ||m==4)
        {
            if(m==3)
            {
                x = x+7;
                printf("AS %d\n",x);
            }
            if(m==4)
            {
                x = x+5;
                printf("AS %d\n",x);
            }
        }
    }
    return 0;
}