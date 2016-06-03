#include<bits/stdc++.h>
using namespace std;
class base
{
    int x,y;
public:
    base(int i,int j)
    {
        x=i;
        y=j;
        cout<< "Value of x,y in Base Class : "<<x<< "," <<y<<endl;
    }
};

class derived : public base
{
    int x,y;
public:
    derived(int i,int j) : base(10,100)
    {
        x=i;
        y=j;
        cout<< "Value of x,y in Derived class : "<<x<< "," <<y<<endl;
    }
};

int main()
{
    derived d1(20,200);
}
