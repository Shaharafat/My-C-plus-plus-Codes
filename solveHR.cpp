#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N[100],sum=0;
    int i;
    scanf("%d",&i);
    for(int n=0;n<i;n++)
        {
        scanf("%lld",&N[i]);
        sum=sum+N[i];
    }
    printf("%lld\n",sum);
    return 0;
}
