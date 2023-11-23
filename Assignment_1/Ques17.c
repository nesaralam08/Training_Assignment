#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Input x1: ");
    scanf("%d",&x1);
    printf("\nInput y1: ");
    scanf("%d",&y1);
    printf("\nInput x2: ");
    scanf("%d",&x2);
    printf("\nInput y2: ");
    scanf("%d",&y2);

    float ans=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("\n\nDistance between the said ponts: %.4f",ans);
}