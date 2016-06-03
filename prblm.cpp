#include<stdio.h>
int main()
{
    int i,j,N,k,M,T,S;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d",&N,&M,&S);
        j=M+S;
        k=j%N;
        if(k!=1)
        printf("%d\n",k-1);
        else
        printf("%d\n",N);
    }
    return 0;
}

