#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    public:
    void funcA()
    {
        cout<<"This is function AuncA()";
    }
    void funcB()
    {
        cout<<"\nFuncB is calling FuncA()\n";
        funcA();
    }

};
int main()
{
    sample samp;
    samp.funcA();
    samp.funcB();
    getch();
}

