#include<bits/stdc++.h>
int main()
{
    long long int j,k,l,m,sum,n,total;
    int i;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        n=1;m=1;
        sum=0;
        total=0;
        scanf("%lld",&k);
        for(l=1;l<=k;l++)
        {
            if(l>2)
                n++;
           sum = sum + n * m;
           total = total + sum;
           m = 6;
        }
        printf("Case %d: ",j);
        printf("%lld %lld\n",sum,total);
    }
    return 0;
}

