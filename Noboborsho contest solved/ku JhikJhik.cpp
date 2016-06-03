#include<bits/stdc++.h>
int main()
{
    long long int N,count,i,k,j,l;;
    scanf("%lld",&i);
    for(k=1;k<=i;k++)
    {
        count=0;
        scanf("%lld",&N);
        for(j=1;j<N;j++)
        {
            for(l=j+1;l<=N;l++)
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}

