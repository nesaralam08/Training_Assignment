#include<stdio.h>

int get(int arr[],int t,int n){
    int s = 0,mid;
    if(t>arr[n-1]){
        return n;
    }
    while(s<=n){
        mid = (s+n)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid]>t){
            s = mid+1;
        }
        else{
            n = mid-1;
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