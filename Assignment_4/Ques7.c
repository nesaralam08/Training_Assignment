#include<stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("Enter A and B :\t");
    scanf("%d%d",&a,&b);
    printf("Enter Operators : + - * / ");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
        case '+':
            printf("Sum is :%d",a+b);
            break;
        case '-':
            printf("Sum is :%d",a-b);
            break;
        case '*':
            printf("Sum is :%d",a*b);
            break;
        case '/':
            printf("Sum is :%d",a/b);
            break;
        default:
            printf("You Enter wrong operator !");    
    }
}