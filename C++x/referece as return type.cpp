#include<iostream>
using namespace std;
int& largevalue(int array[],int n);
int main()
{
    int iarry[10]={22,32,123,12,43,243,51,41,752,123};
    cout<<"Large Element: "<<largevalue(iarry,10)<<endl;
}

int& largevalue(int array[],int n)
{
    int i,currentindex=0;
    for(i=1;i<n;i++)
    {
        if(array[currentindex]<array[i])
        currentindex=i;
    }
    return array[currentindex];
}
