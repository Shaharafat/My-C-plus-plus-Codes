#include<stdio.h>
int main()
{
    int arry[100000],i,j,k,m,temp;
    int l,count=1,digit;
    scanf("%d\n",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&k);
        for(l=0;l<k;l++)
        {
            scanf("%d",&arry[l]);
        }
        for(l=0;l<k;l++)
        {
            for(m=l+1;m<k;m++)
            {
                if(arry[l]>arry[m])
                {
                    temp=arry[m];
                    arry[m]=arry[l];
                    arry[l]=temp;
                }
            }
        }
        digit=arry[0];
        for(l=0;l<k;l++)
        {
            if(arry[l]==arry[l+1])
            {
                if(arry[l]==0)
                break;
                else
                {
                    count++;
                    digit=arry[l];
                }
            }
        }
        printf("Case %d: %d %d",j+1,digit,count);
    }

}
