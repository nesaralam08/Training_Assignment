#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter side of the equilateral triangle :");
    scanf("%d",&a);
    float ans=((sqrt(3)/4)*(a*a));
    printf("Area of equilateral triangle =%.1f sq. units",ans);
}