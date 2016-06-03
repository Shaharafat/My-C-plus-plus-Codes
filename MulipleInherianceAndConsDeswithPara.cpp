#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    A(int i)
    {
        x=i;
        cout<< "Value of X in A: "<<x<<endl;
    }
};

class B : public A
{
    int x,y;
public:
    B(int i,int j) : A(10)
    {
        x=i;
        y=j;
        cout<< "Value of X,Y in B: "<<x<<","<<y<<endl;
    }
};

class C : public B
{
    int x,y,z;
public:
    C(int i,int j,int k) : B(20,200)
    {
        x=i;
        y=j;
        z=k;
        cout<< "Value of X,Y,Z in C: "<<x<<","<<y<<","<<z<<endl;
    }
};

int main()
{
    C c1(30,300,3000);
}
