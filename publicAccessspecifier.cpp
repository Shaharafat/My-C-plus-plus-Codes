#include<bits/stdc++.h>
using namespace std;
class A
{
    int privateA;
public:
    int getvalue(void)
    {
        cout<<"Enter a number: "<<endl;
        cin>>privateA;
        return (privateA);
    }
    void printA(){cout<< "\nPrivateA is: "<<getvalue()<<endl;}
};
class B : public A
{
private:
    int privateB;
public:
    void printB(int x)
    {
        privateB=x;
        cout<< "PrivateB is : "<<privateB;
    }
};

int main()
{
    A a1;
    B b1;
    a1.printA();
    b1.printB(b1.getvalue());
}

