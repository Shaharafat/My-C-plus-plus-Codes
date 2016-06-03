#include<stdio.h>
#include<conio.h>
void swapvalue(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int p,q;
    p=5;
    q=7;
    swapvalue(&p,&q);
    printf("p=%d , q=%d",p,q);
}
