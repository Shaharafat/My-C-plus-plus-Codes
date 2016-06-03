#include<bits/stdc++.h>
int main()
{
    long long int j,k,l,m,total;
    int arry[1000000]
    long int i;
    scanf("%ld",&i);
    for(j=1;j<=i;j++)
    {
        total=0;
        scanf("%lld %lld",&k,&l);
        arry[0]=0;
        for(m=1;m<=l;m++)
        {
            arry[m] = arry[m-1] ^ m;
        }
        for(m=k;m<=l;m++)
        {
            total = total + arry[m];
        }
        printf("%lld\n",total);
    }
    return 0;
}

