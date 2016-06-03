#include<bits/stdc++.h>
void InsertAndSearchData();
void LinearSearch(int data[],int SIZE);
int main()
{
    InsertAndSearchData();
}

void InsertAndSearchData()
{
    int n;
    printf("How many DATA you want to insert ? ");
    scanf("%d",&n);
    int DATA[n];
    for(int i=0;i<n;i++)
    {
        printf("DATA[%d]---> ",i+1);
        scanf("%d",&DATA[i]);
    }
    LinearSearch(DATA,n);
}

void LinearSearch(int data[],int SIZE)
{
    int LOC,ITEM;
    printf("Which ITEM you wanna search ? ");
    scanf("%d",&ITEM);
    data[SIZE]=ITEM;
    LOC=0;
    while(data[LOC] != ITEM)
    {
        LOC=LOC+1;
    }
    if(LOC==SIZE)
        printf("ITEM doesn't found.\n");
    else
        printf("ITEM found and the location is %d ",LOC+1);
}
