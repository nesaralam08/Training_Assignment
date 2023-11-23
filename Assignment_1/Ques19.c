#include<stdio.h>

int main()
{
    float fah;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fah);

    float cel=((fah-32)*0.555);
    printf("\n\nTemperature in celsius: %.2f",cel);

}