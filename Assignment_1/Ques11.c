#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    float r,CI;
    printf("Enter principle(amount):");
    scanf("%d",&p);
    printf("\nEnter time:");
    scanf("\nEnter time:");
    scanf("%d",&t);
    printf("\nEnter rate:");
    scanf("%f",&r);
    CI=(p*pow((1+(r/100)),t));
    printf("\n\nCompound Interest = %f",CI);
}