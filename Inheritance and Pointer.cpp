#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
    void showbasemsg()
    {
        cout<< "This is Base..."<<endl;
    }
};

class derive
{
public:
    void showderivedmsg()
    {
        cout<< "This is derived."<<endl;
    }
};

int main()
{
    Base base;
    derive derived;
    Base *ptr;
    ptr = derived;
}
