#include<stdio.h>

int main()
{
    int p,ch,b,m,c;
    printf("Enter the marks of five subjects :\t");
    scanf("%d%d%d%d%d",&p,&ch,&b,&m,&c);
    int t = p+ch+b+m+c;
    int per = ((t*100)/500);
    float P = per;
    if(per>=90)
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade A");
    }
    else if(per>=80 && per<90)
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade B");
    }
    else if(per>=70 && per<80)
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade C");
    }
    else if(per>=60 && per<70)
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade D");
    }
    else if(per>=40 && per<60)
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade E");
    }
    else
    {
        printf("Percentage = %.2f\n",P);
        printf("Grade F");
    }
}