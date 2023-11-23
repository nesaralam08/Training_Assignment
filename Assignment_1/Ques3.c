#include<stdio.h>

int main()
{
    char EmployeesID[10];
    int hour,sal;
    printf("Input the Employees ID:\t");
    gets(EmployeesID);
    printf("Enter the working hrs:\t");
    scanf("%d",&hour);
    printf("Input amount:\t");
    scanf("%d",&sal);
    printf("Employees ID = %s\n\n",EmployeesID);
    float salary=(hour*sal);
    printf("Salary = U$ %.2f",salary);
}