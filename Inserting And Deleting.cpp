#include<bits/stdc++.h>
#include<conio.h>
void insertdata(int data[],int loc,int N);
void deletedata(int data[],int loc,int N);
int main()
{
    char ch;
    int i,j,k,l;
    printf("How many data you want to insert?\n\t");
    scanf("%d",&j);
    int arry[j];
    printf("Insert data into the list for the first time.\n");
    for(k=0;k<j;k++)
    {
        printf("Data[%d]--> ",k);
        scanf("%d",&arry[k]);
    }
    printf("Do you want to insert more data ?\n\t Press Y (yes) / N (no)\n");
    ch = getch();
    if( (ch == 'Y') || (ch == 'y') )
    {
        printf("In which location you want to insert ? \n");
        scanf("%d",&i);
        insertdata(arry,i,(j-1));
    }

    printf("Do you want to delete data ?\n\t Press Y (yes) / N (no)\n");
    ch = getch();
    if( (ch == 'Y') || (ch == 'y') )
    {
        printf("which location you want to delete ? \n");
        scanf("%d",&i);
        deletedata(arry,i,(j-1));
    }
    return 0;
}


void insertdata(int data[],int loc,int N)
{
    int item;
    int J=N;
    while(J >= loc)
    {
        data[J+1] = data[J];
        J = J-1;
    }
    printf("Which data you want insert ?\n");
    scanf("%d",&item);
    data[loc]=item;
    N=N+1;
    printf("After Inserting : \n");
    for(int k=0;k<=N;k++)
    {
        printf("Data[%d]--> %d\n",k,data[k]);
    }
}

void deletedata(int data[],int loc,int N)
{
    int item;
    item=data[loc];
    while(loc <= (N-1))
    {
        data[loc]=data[loc+1];
        loc++;
    }
    N=N-1;
    printf("After deleting : \n");
    for(int k=0;k<=N;k++)
    {
        printf("Data[%d]--> %d\n",k,data[k]);
    }
}

