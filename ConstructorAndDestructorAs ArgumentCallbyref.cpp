#include<iostream>
using namespace std;

class classA
{
    int a;
    public:
    classA(int x)
    {
        a=x;
        cout<<"\n\nConstructing...";
    }
    void print()
    {
        cout<<"\n\nValue of A is: "<<a;
    }
    ~classA()
    {
        cout<<"\n\nDestructing....";
    }
};
void funcA(classA *obj)
;int main()
{
   classA ob1(10) ;
   funcA(&ob1);
}
void funcA(classA *obj)
{
    obj->print();
}
