#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void show(){cout << "This is Msg from virtual funcion in base." <<endl;}
    void nonv(){cout << "This is msg from non-virtual function in base."<<endl; }

};

class derive1:public base
{
    public:
    void show(){cout << "This is Msg from virtual funcion in derive1." <<endl;}
    void nonv(){cout << "This is msg from non-virtual function in derive1."<<endl; }

};

class derive2 : public base
{};

int main()
{
    base *b;
    derive1 d1;
    derive2 d2;
    b=&d1;
    b->show();
    b->nonv();
    b=&d2;
    b->show();
    b->nonv();
}
