#include<stdio.h>
int main()
{
    int arry[10],i,k,j,n;
    scanf("%d",&i);
    for(n=0;n<i;n++)
    {
        scanf("%d",&arry[n]);
        printf("Case %d:\n",n+1);
        for(j=0;j<arry[n];j++)
        {
            for(k=0;k<=j;k++)
            {
                printf("%d",k+1);
            }
            printf("\n");
        }
    }
    return 0;
}
