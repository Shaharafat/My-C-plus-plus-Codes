#include<bits/stdc++.h>
using namespace std;
class A
{
protected:
    int i;
};

class B : virtual public A
{
public:
    B(){cout<<"this is class B"<<endl;}
};

class C : virtual public A
{
public:
    C(){cout<<"this is class C"<<endl;}
};

class D : public B,public C
{
public:
    void showval(){i=10;cout<<i;}
};

int main()
{
    D d1;
    d1.showval();
}

