#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float r;
    float V;
    printf("Input the radius of the sphere: ");
    scanf("%f",&r);
    float den=(4*pi*(r*r*r));
    V =(den/3);
    printf("The volume of sphere is %f",V);
}