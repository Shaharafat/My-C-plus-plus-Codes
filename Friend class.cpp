#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int prva1;
    public:
    A()
    {
        prva1=0;
    }
    void getprva1(int x)
    {
        prva1=x;
    }
    friend class B;
};

class B
{
    int prvb1;
    public:
    B()
    {
        prvb1=0;
    }
    void getprvb1(A &a)
    {
        prvb1=a.prva1+25;
        a.prva1=50;
    }
    void showprvb1(A a)
    {
        cout<<"\nValue of prva1= "<<a.prva1<<"\n";
        cout<<"\nValue of prvb1= "<<prvb1<<"\n";
    }
};

int main()
{
    A a1;
    B b1;
    a1.getprva1(30);
    b1.getprvb1(a1);
    b1.showprvb1(a1);
}

