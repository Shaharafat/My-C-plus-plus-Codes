#include<bits/stdc++.h>
using namespace std;
class Base1
{
public:
    void showBase1Msg(){cout<< "This is Base1 Class"<<endl;}
};

class Base2
{
public:
    void showBase2Msg(){cout<< "This is Base2 Class"<<endl;}
};

class Base3
{
public:
    void showBase3Msg(){cout<< "This is Base3 Class"<<endl;}
};

class derived : public Base1,private Base2,public Base3
{
public:
    void showderivedmsg(){cout<< "This is derived class"<<endl;}
};

int main()
{
    derived d1;
    d1.showBase1Msg();
    d1.showBase3Msg();
    d1.showderivedmsg();
}
