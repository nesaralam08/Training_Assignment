#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int play_the_game(int target[], int arraySize){

  /* Enter your code here. */  
    int cnt=0;
    while(1){
        int n=0;
        int m=0;
        for(int i=0;i<arraySize;i++)
        {
            if(target[i]%2==0)
            {
                n++;
            }
        }
        if(n==arraySize)
        {
            for(int i =0;i<n;i++)
            {
                target[i]/=2;
            }
            cnt++;
        }
        else{
            for(int i=0;i<arraySize;i++)
            {
                if(target[i]%2!=0)
                {
                    target[i]-=1;
                    cnt++;
                }
            }
        }
        for(int i=0;i<arraySize;i++)
        {
            if(target[i]==0)
            {
                m++;
            }
        }
        if(m==arraySize)
            break;
    }
    return cnt;
}
int main() {
	/* Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans = play_the_game(arr,n);
    printf("%d",ans);
    return 0;
}