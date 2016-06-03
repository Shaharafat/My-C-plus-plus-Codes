#include<bits/stdc++.h>
int main()
{
    char arry[100];
    int i,j,l=1,m=1,len,sum=0;
    while(scanf("%d",&i) != EOF)
    {
        for(j=1;j<=i;j++)
        {
            scanf("%s",arry);
            len=strlen(arry);
            if(arry[len-1]==49)
            sum=sum+1;
            else if (arry[len-1]==51)
            sum=sum+3;
            else if (arry[len-1]==53)
            sum=sum+5;
            else if (arry[len-1]==55)
            sum=sum+7;
            else if (arry[len-1]==57)
            sum=sum+9;
        }
            if(sum>9)
            sum=sum%10;
        printf("Case %d: %d taka\n",l,sum);
        sum=0;
        l++;
    }
    return 0;
}
