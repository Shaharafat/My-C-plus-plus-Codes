#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void Msg(); //No parameter...
};

void base :: Msg()
{
    cout << "Msg from base class..."<<endl;
}

class derive :public base
{
public:
    void Msg(int i) //parameter declared thats why polymorphic object will never created...
    {
        cout << "Msg from derived class and value of i : "<< i <<endl;
    }
};

int main()
{
    base *baseptr;
    derive d1;
    baseptr=&d1;
    baseptr->Msg();
}
