#include<stdio.h>

int get(int arr[],int t,int n){
    int s=0,e,mid;
    e = n;
    if(t>arr[n-1])
    {
        return n;
    }
    while(s<=e)
    {
        mid = ((s+e)/2);
        if(arr[mid]==t)
        {
            return mid;
        }
        else if(t>arr[mid])
        {
            s = mid+1;
        }
        else if(t<arr[mid])
        {
            e = mid-1;
        }
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int s = get(arr,t,n);
    printf("%d",s);
}