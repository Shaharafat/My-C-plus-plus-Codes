#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void Msg(){cout << "This is Msg from Base."<<endl;}
};

class derived1 : public base
{
    public:
    void Msg(){cout << "This is Msg from Derived2"<<endl;}
};

class derived2 : public base
{
    public:
    void Msg(){cout << "This is Msg from Derived2"<<endl;}
};

int main()
{
    base *baseptr;
    derived1 d1;
    derived2 d2;
    baseptr=&d1;
    baseptr->Msg();
    baseptr=&d2;
    baseptr->Msg();
    return 0;
}
