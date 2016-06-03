#include<stdio.h>
int main()
{
    int a[5],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        if(a[j]==42)
        break;
        else
        printf("%d\n",a[j]);
    }
    return 0;
}
