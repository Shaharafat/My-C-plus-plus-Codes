#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int b;
};
class derived1:private base
{
public:
    int d1;
    void showderived1value()
    {
        b=10;
        d1=10;
        cout<<b+d1<<endl;
    }
};
class derived2:private derived1
{
public:
    void showderived2value()
    {
        d1=50;
        cout<<d1<<endl;
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    d1.showderived1value();
    d2.showderived2value();
}
