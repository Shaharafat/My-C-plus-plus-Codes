#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    int add_AB()
    {
        return (a+b);
    }
};
    void funcA(A obj);
    int main()
    {
        A ob1(5,15);
        funcA(ob1);
    }

    void funcA(A obj)
    {
        int getObjvalue;
        getObjvalue=obj.add_AB();
        cout<<"\nMultiply returned value with 5 givens: "<<getObjvalue*5;
    }

