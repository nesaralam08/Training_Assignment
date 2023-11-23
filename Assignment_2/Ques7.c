#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char ch,c='%';
    printf("Enter two number A and B:");
    scanf("%d%d",&a,&b);
    
    printf("Operator\t Meaning\n\n");
    printf(" +\t\tAddition\n");
    printf(" -\t\tSubtraction\n");
    printf(" *\t\tMultiplication\n");
    printf(" /\t\tDivision\n");
    printf(" %c\t\tModulous\n",c);
    fflush(stdin);
    printf("\n\nEnter Choice => ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
            printf("Addition is :%d\n",(a+b));break;
        case '-':
            printf("Subtraction is :%d\n",(a-b));break;
        case '*':
            printf("Multiplication is :%d\n",(a*b));break;
        case '/':
            printf("Division is :%d\n",(a/b));break;
        case '%':
            printf("Addition is :%d\n",(a%b));break;
    }
    
}