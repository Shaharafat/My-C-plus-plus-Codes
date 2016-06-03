#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base(){cout << "Base Constructor."<<endl;}
    virtual ~base()=0;
};

base::~base()
{
    cout << "Base Desructor."<<endl;
}

class derived : public base
{
public:
    derived(){cout << "Derived constructor."<<endl;}
    ~derived(){cout << "Derived destructor."<<endl;}
};

int main()
{
    base *ptr;
    ptr=new derived;
    delete ptr;
}
