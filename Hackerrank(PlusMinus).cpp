#include<bits/stdc++.h>
int main()
{
    int a[500],i,j,k;
    float p=0,n=0,z=0;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<i;j++)
    {
        if(a[j]<0)
        n++;
        else if (a[j]>0)
        p++;
        else
        z++;
    }
        printf("%f\n",(p/i));
        printf("%f\n",(n/i));
        printf("%f\n",(z/i));
}

