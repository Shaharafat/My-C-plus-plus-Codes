#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void showAmsg(){cout<< "This is class A" <<endl;}
};

class B : public A
{
public:
    void showBmsg(){showAmsg();cout<< "This is class B"<<endl;}
};

class C : public B
{
public:
    void showCmsg(){showBmsg();cout<< "This is class C"<<endl;}
};

int main()
{
    C c1;
    c1.showAmsg();
    cout<<"\n";
    c1.showBmsg();
    cout<<"\n";
    c1.showCmsg();

}
