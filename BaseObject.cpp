#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int b;
    base(){b=10;}
    void showMemValueinBase(){cout<< b <<endl;}
};

class derived : public base
{
    int d;
public:
    derived(){b=50;d=100;}
    void ShowMemValueinDerived(){cout<< b << "," << d <<endl;}
};

int main()
{
    base b1;
    derived d1;
    d1.showMemValueinBase();
    b1.showMemValueinBase();
    d1.ShowMemValueinDerived();
}
