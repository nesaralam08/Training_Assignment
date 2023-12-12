#include<stdio.h>
int *p;
void show()
{
    int x =25;
    p = &x;
}
int main()
{
    // Dangling Pointer 1
    // int *p;
    // {
    //     int x;
    //     x = 10;
    //     p = &x;
    // }
    // printf("%d",*p);

    // Dangling Pointer 2
    show();
    printf("The value of x in function show is :%d",*p);

    // int x = 10;
    // const int *p = &x;
    // *p = 15;
    // printf("%d",x);

    // int const x = 10;
    // int * const p = &x;
    // *p = 15;
    // printf("%d",x);

    // int x=10,y=20,z=30;
    // int *arr[3]={&x,&y,&z};
    // for(int i=0;i<3;i++)
    // {
    //     printf("%d\t",*arr[i]);
    // }

    // int *p1,**p2,***p3;
    // int x = 10;
    // p1 = &x;
    // p2 = &p1;
    // p3 = &p2;
    // printf("%d\t%d\t%d",*p1,**p2,***p3);
}