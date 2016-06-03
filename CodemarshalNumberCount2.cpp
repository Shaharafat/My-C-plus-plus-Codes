#include<bits/stdc++.h>
int main()
{
    int a[100000],i,j,k,l,m,sorted,sum,dig,temp;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&k);
        for(l=0;l<k;l++)
        {
            scanf("%d",&a[l]);
        }
        while(1){
            sorted=0;
            for(m=0;i<k-1;m++){
                if(a[m]<a[m+1]){
                    temp=a[m];
                    a[m]=a[m+1];
                    a[m+1]=temp;
                    sorted=1;
                }
            }
            if(sorted==0){
                break;
            }
        }
        sum=1;dig=a[0];
        for(l=0;l<k;l++)
        {
            if(a[l]==a[l+1])
            {
                if(a[l]==0)
                break;
                else
                {
                    sum++;
                    dig=a[l];
                }
            }
        }
        printf("Case %d: %d %d\n",j,dig,sum);
    }
    return 0;
}
