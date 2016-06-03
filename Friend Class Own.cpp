#include<bits/stdc++.h>
using namespace std;
class A
{
    int length,width;
public:
    A(){};
    A(int len,int wdth)
    {
        length=len;
        width=wdth;
    }
    void show(){cout<< "length: " << length << "\tWidth: " <<width << endl;}
    friend class B;
};

class B
{
public:
    void sets(A a)
    {
        a.length=10;
        a.width=5;
        cout<< "length: " << a.length << "\tWidth: " <<a.width << endl;
    }
};

int main()
{
    A a1(10,20),a2;
    B b1;
    a1.show();
    b1.sets(a2);

}
