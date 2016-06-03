#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    void addAB(void)
    {
        cout<<"A+B= "<<a+b<<endl;
    }
};
A a1;
void f(void)
{
    cout<<"\n\nIn f(): {a=15,b=15}:\n\t";
    a1.a=15;
    a1.b=15;
    a1.addAB();
}
int main()
{
    cout<<"In Main(): {a=5,b=5}:\n\t";
    a1.a=5;
    a1.b=5;
    a1.addAB();
    f();
}

