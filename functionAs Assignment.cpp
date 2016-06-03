#include<iostream>
using namespace std;
int i=10,j=20;
int& somefunc()
{
    return i;
}

int main()
{
    somefunc()=j;
    cout<<"I is : "<<i;
}
