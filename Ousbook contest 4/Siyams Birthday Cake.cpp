#include<stdio.h>
int main()
{
    long long int i,o,l=1;
    int k;
    while(scanf("%lld",&i)!=EOF){
    if(i<0)
    return 0;
    l=l+(i*(i+1)/2);
    o=(l/(i+1))+(l%(i+1));
    printf("%lld\n",o);
    l=1;
    }
    return 0;
}

