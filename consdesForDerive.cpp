#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base(){cout<<"Base consructor called.\n";}
    ~base(){cout<< "Base desructor called. \n";}
};
class derived : public base
{
public:
    derived(){cout<< "Derived constructor called.\n";}
    ~derived(){cout<< "Derived destructor called.\n"; }
};
int main()
{
    cout<< "Calling Consructor....\n\n";
    derived d1;
    cout<< "Calling Destructor....\n\n";
}

