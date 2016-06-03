#include<bits/stdc++.h>
int main()
{
    int arry[100][100],i,j,k,l,m,n,a=0,b=0,c;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            scanf("%d",&arry[j][k]);
        }
    }
    for(j=0;j<i;j++)
        a=a+arry[j][j];
    m=i-1;
    for(j=0;j<i;j++,m--)
        b=b+arry[j][m];
    c=abs(a-b);
    printf("%d\n",c);
    return 0;
}

