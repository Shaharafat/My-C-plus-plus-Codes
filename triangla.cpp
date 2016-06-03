#include<stdio.h>
#include<math.h>
int main()
{
    int a[3],b[3],c[3],i,j,s,n;
    int area;
    scanf("%d",&i);
    for(n=0;n<i;n++)
    {

        scanf("%d %d %d",&a[n],&b[n],&c[n]);
        if((a[n]+b[n])>=c[n])
        {
            s=(a[n]+b[n]+c[n])/2;
            area=sqrt(s*(s-a[n])*(s-b[n])*(s-c[n]));
            printf("Case %d: %d\n",n+1,area);
        }
    }
}
