#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void msg(){cout<< "Msg from base class"<<endl;}
};

class derived1 : public base
{
public:
    void msg(){cout<< "Msg from derived1"<<endl; }
};

class derived2 : public derived1
{
    public:
    void msg(){cout<< "Msg from derived2"<<endl; }
};

class derived3 : public derived2
{

};
int main()
{
    base *baseptr;
    derived1 d1;
    derived2 d2;
    derived3 d3;

    baseptr=&d1;
    baseptr->msg();

    baseptr=&d2;
    baseptr->msg();

    baseptr=&d3;
    baseptr->msg();

}
