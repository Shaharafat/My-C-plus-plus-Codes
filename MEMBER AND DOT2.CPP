#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    void funcA()
    {
    cout<<"This is FuncA";
    }

};
class B
{
    A smp;
    public:
    void funcB()
    {
        smp.funcA();
        cout<<"\n Fucntion A is calling in function B";
    }
};
int main()
{
    B smp2;
    smp2.funcB();
getch();

}



