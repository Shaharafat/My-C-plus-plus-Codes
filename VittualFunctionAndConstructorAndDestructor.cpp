#include<bits/stdc++.h>
using namespace std;
class base{
public:
    base()
    {
        cout << "Creating obect of type base...."<<endl;
    }
    virtual void msg(){cout<< "Msg() from class base"<<endl;}
    virtual ~base()
    {
        cout << "Destructing obect of type base...."<<endl;
    }
};

class derive : public base
{
    int *p;
public:
    derive()
    {
        p=new int[10];
        cout << "Creating obect of type derive...."<<endl;
    }
    virtual void msg(){cout<<"Msg() from class derive that inherits base"<<endl;}
    ~derive()
    {
        delete [] p;
        cout << "Destructing obect of type derive...."<<endl;
    }
};

int main()
{
    base *ptr;
    ptr=new derive;
    ptr->msg();
    delete ptr;
}
