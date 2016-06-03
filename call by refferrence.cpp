#include<iostream>
using namespace std;
void swapvalue(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int p,q;
    p=5;
    q=7;
    swapvalue(p,q);
    cout<<"P = "<<p<<endl<<"Q = "<<q;
}
