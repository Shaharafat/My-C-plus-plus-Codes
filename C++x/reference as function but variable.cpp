#include<iostream>
using namespace std;
int i=10,j=20;

int& somefunc()
{
    return i;
}
int main()
{
    somefunc()=j;//here somefunc() is working as a reference variable...
    cout<<i<<endl;
}
