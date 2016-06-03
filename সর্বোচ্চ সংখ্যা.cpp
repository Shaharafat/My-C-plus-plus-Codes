#include<stdio.h>
int main()
{
    int i,a,b,c,j,k;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b)&&(a>c))
        printf("Case %d: %d\n",j,a);
        else if((b>a)&&(b>c))
        printf("Case %d: %d\n",j,b);
        else
        printf("Case %d: %d\n",j,c);
    }
    return 0;
}
