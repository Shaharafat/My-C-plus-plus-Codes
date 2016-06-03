#include<stdio.h>
int main()
{
    int arry[5],i,sum=0;
    for(i=0;i<5;i++)
    {
    scanf("%1d",&arry[i]);
    sum=sum+arry[i];
    }
    printf("%d",sum);
}
