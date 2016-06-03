#include<iostream>
void binsearch(int arr[],int,int);
int main()
{
    int n,i,BEG,END;
    cout << "How many DATA you want to insert ? ";
    scanf("%d",&n);
    int DATA[n];
    for(i=0;i<n;i++)
    {
        printf("DATA[%d]---> ",i);
        scanf("%d",&DATA[i]);
    }
    BEG=0;
    END=n-1;

    binsearch(DATA,BEG,END);
    return 0;
}

void binsearch(int arr[],int beg,int endd)
{
    int ITEM,LOC;
    printf("Which data you wanna search? ");
    scanf("%d",&ITEM);

    int MID=int ((beg+endd)/2);
    while((beg<=endd)&&(arr[MID]!=ITEM))
    {
        if(ITEM<arr[MID])
            endd=MID-1;
        else
           beg=MID+1;
        MID=int ((beg+endd)/2);
    }
    if(arr[MID]==ITEM)
    {
        LOC=MID;
        printf("%d is in this list and the location is %d\n",ITEM,LOC);
    }
    else
    {
        printf("%d is not in this list.\n",ITEM);
    }
}

