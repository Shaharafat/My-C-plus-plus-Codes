#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    A(int i){x=i;cout<< "Value of X in A: "<<x<<endl;}
};

class B
{
    int x,y;
public:
    B(int i,int j)
    {
        x=i;
        y=j;
        cout<< "Value of X,Y in B: "<<x<<","<<y<<endl;
    }
};

class C
{
public:
    C()
    {
        cout<< "This is constructor in C"<<endl;
    }
};

class D : public A,public B,public C
{
    int x,y,z;
public:
    D(int i,int j,int k) : A(10),B(20,200)
    {
        x=i;
        y=j;
        z=k;
        cout<< "Value of X,Y,Z in D: "<<x<< "," <<y<< "," <<z<<endl;
    }
};

int main()
{
    D d1(30,300,3000);
}
