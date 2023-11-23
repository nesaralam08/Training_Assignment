#include<stdio.h>

int main()
{
    int amount,rest;
    int n100,n50,n20,n10,n5,n2,n1;
    n100=n50=n20=n10=n5=n2=n1=0;
    printf("Input the amount:");
    scanf("%d",&amount);
    printf("There are:");
    n100=amount/100;
    rest=amount%100;
    printf("\n\n%d Notes(s) of 100.00",n100);
    n50=rest/50;
    rest=rest%50;
    printf("\n\n%d Notes(s) of 50.00",n50);
    n20=rest/20;
    rest=rest%20;
    printf("\n\n%d Notes(s) of 20.00",n20);
    n10=rest/10;
    rest=rest%10;
    printf("\n\n%d Notes(s) of 10.00",n10);
    n5=rest/5;
    rest=rest%5;
    printf("\n\n%d Notes(s) of 5.00",n5);
    n2=rest/2;
    rest=rest%2;
    printf("\n\n%d Notes(s) of 2.00",n2);
    n1=rest/1;
    rest=rest%1;
    printf("\n\n%d Notes(s) of 1.00",n1);
    
}