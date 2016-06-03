#include<iostream>
using  namespace std;
class A
{
int a;
public:
A(int x)
{
    a=x;
    cout<<"\nCostructing...";
}
void print()
{
    cout<<"\n\nValue of A is: "<<a;
}
~A()
{
    cout<<"\n\nDestructing...";
}
};
void funcA(A obj);
int main()
{
    A ob1(10);
    funcA(ob1);
}
void funcA(A obj)
{
    obj.print();
}
