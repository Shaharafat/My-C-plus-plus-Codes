#include<iostream>
using namespace std;
class X
{
    public:
    int x;
    void ShowAddress();
};
void X::ShowAddress()
{
    cout<<"Address of this->x  : "<<&(this->x)<<endl<<endl;
}
int main()
{
    X x1,x2,x3;
    x1.x=10;
    x2.x=20;
    x3.x=30;
    cout<<"Address of   x1.x   : "<<&x1.x<<endl;
    x1.ShowAddress();
    cout<<"Address of   x2.x   : "<<&x2.x<<endl;
    x2.ShowAddress();
    cout<<"Address of   x3.x   : "<<&x3.x<<endl;
    x3.ShowAddress();
}
