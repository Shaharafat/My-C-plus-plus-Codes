#include<bits/stdc++.h>
using namespace std;
class A
{
    int length,width;
public:
    A(){ length=width=0; };
    A(int l,int w)
    {
        length=l;
        width=w;
    }

    A operator+ (int x);
    A operator- (int y);
    A operator+=(int z);
    A operator + (A a2);

    void show(){cout<<"length: "<<length<<endl<< "width : "<<width<<endl<<endl<<endl;}
    void show2(){cout<<length<<endl;
    cout<<width<<endl;}
};

A A::operator + (int x)
{
    A temp;
    temp.length=length+x;
    temp.width=width+x;
    return temp;
}

A A :: operator - (int y)
{
    A tmp;
    tmp.length=length-y;
    tmp.width=width-y;
    return tmp;
}

A A :: operator += (int z)
{
    A tep;
    tep.length=length+=z;
    tep.width=width+=z;
    return tep;
}

A A :: operator + (A a2)
{
    A tep;
    tep.length=length+a2.length;
    tep.width=width+a2.width;
    return tep;
}

int main()
{
    A a1(10,20),a;
    a.show();
    a1.show();

    cout<< "a=a1+10"<<endl;
    a=a1+10;
    a.show();

    cout<< "a=a1-10"<<endl;
    a=a1-10;
    a.show();

    cout<< "a=a1+=10"<<endl;
    a=a1+=10;
    a.show();

    cout<< "a=a+a1"<<endl;
    a=a+a1;
    a.show();

    a1.show2();


    return 0;
}
