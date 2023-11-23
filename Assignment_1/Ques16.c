#include<stdio.h>

int main()
{
    int dis,lit;
    printf("Input total distance in km:  ");
    scanf("%d",&dis);
    printf("\nInput total fuel spent in litres:  ");
    scanf("%d",&lit);

    float avg=dis/lit;
    printf("\n\nAverage consumption (km/lt) %.2f",avg);

}