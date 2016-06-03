#include<bits/stdc++.h>
int main()
{
    int n,i,MID,BEG,END,LOC,ITEM;
    printf("How many DATA you want to insert ? ");
    scanf("%d",&n);
    int DATA[n];
    for(i=0;i<n;i++)
    {
        printf("DATA[%d]---> ",i);
        scanf("%d",&DATA[i]);//insert data in ascending order...
    }
    printf("Which data you wanna search? ");
    scanf("%d",&ITEM);
    BEG=0;
    END=n-1;
    MID=int ((BEG+END)/2);
    while((BEG<=END)&&(DATA[MID]!=ITEM))
    {
        if(ITEM<DATA[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=int ((BEG+END)/2);
    }
    if(DATA[MID]==ITEM)
    {
        LOC=MID;
        printf("%d is in this list and the location is %d\n",ITEM,LOC);
    }
    else
    {
        printf("%d is not in this list.\n",ITEM);
    }
    return 0;
}

