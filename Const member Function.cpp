#include<iostream>
using namespace std;
class X
{
    int x;
    public:
    X(int i)
    {
        x=i;
    }
    void changex()
    {
        x=10;
    }
    void Mod() const
    {
        x=20;
    }
    void showx() const;

};
void X::showx() const
{
    cout<<"x is "<<x<<endl;
}

int main()
{
    X x1(100);
    x1.showx();
    x1.changex();
    x1.Mod();
}
