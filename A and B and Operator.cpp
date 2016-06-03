#include<stdio.h>
int main()
{
    long int a[100],b[100],i,n;
    char c[100];
    scanf("%d",&i);
    for(n=0;n<i;n++)
    scanf("%d %d %c",&a[n],&b[n],&c[n]);
    for(n=0;n<i;n++)
    {
        if(c[n]==43)
            printf("Case %d: %d\n",n+1,a[n]+b[n]);
        else if(c[n]==45)
            printf("Case %d: %d\n",n+1,a[n]-b[n]);
        else if(c[n]==42)
            printf("Case %d: %d\n",n+1,a[n]*b[n]);
        else if(c[n]==47)
            printf("Case %d: %d\n",n+1,a[n]/b[n]);
        else
            printf("Case %d: %d\n",n+1,a[n]%b[n]);
    }
    return 0;
}
