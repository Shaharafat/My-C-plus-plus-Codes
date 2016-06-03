#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int p,q;
    p=7;
    q=5;
    swap(p,q);
    cout<<"p= "<<p<<" \nq= "<<q<<endl;
}

void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
