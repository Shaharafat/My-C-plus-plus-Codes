#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void add()
    {
        cout<<"A+B= "<<a+b<<endl;
    }
};
int main()
{
    A a1,a2;
    a1.a=5;
    a1.b=5;
    a2=a1;
    a1.add();
    a2.add();
}
