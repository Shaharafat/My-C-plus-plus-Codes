#include<bits/stdc++.h>
int main()
{
    char a[100];
    int i,j,k,l,n,len;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&n);
        scanf("%s",a);
        len=strlen(a);
        for(n;n<=len;n++)
        {
            a[n-1]=a[n];
        }
        printf("Case %d: %s\n",j,a);
    }
    return 0;
}

