
#include<stdio.h>
#include<math.h>
void main()
{
    int n,last,first;
    printf("Enter N :\t");
    scanf("%d",&n);
    int nod = snprintf(NULL, 0, "%d",n);  
    last = (n%10);
    first = n/(pow(10,nod-1));
    int t = first;
    first = last;
    last = t;
    int swap = last*(pow(10,nod-1)) + n%(int)pow(10,n-1);
    printf("Number after swapped :%d",swap);
}