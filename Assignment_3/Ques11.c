#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Input a:\t");
    scanf("%d",&a);
    printf("Input b:\t");
    scanf("%d",&b);
    printf("Input c:\t");
    scanf("%d",&c);

    int  n = ((b*b)-(4*a*c));
    double D = sqrt(n);
    if(D>0)
    {
        printf("%.2f\t%.2f",((-b+D)/(2*a)),((-b-D)/(2*a)));
    }
    else if(D==0)
    {
        printf("%.2f\t%.2f",(-b/(2*a)),(-b/(2*a)));
    }
    else{
        printf("%.2f+i\t%.2f-i",((-b+D)/(2*a)),((-b-D)/(2*a)));
    }
}