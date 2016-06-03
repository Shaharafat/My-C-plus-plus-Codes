#include<iostream>
using namespace std;
class X
{
    int x;
    public:
    X()
    {
        cout<<"Constructing..."<<endl;
    }
    void SetX(int a)
    {
        x=a;
    }
    int GetX(void)
    {
        return x;
    }
    ~X()
    {
        cout<<"Destructing...."<<endl;
    }
};
void func(X& x)
{
    cout<<"Value of x from main()   : "<<x.GetX()<<endl;
    x.SetX(15);
    cout<<"Value of x in func()     : "<<x.GetX()<<endl;
}
int main()
{
    X x1;
    x1.SetX(10);
    func(x1);
    cout<<"After calling func(),x is: "<<x1.GetX()<<endl;
}
