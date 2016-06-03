#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2,class T3>
class X
{
    T1 p;T2 q;T3 r;
public:
    X(T1 a,T2 b,T3 c){p=a;q=b;r=c;}
    void showvalue();
};

template<class T1,class T2,class T3>
void X<T1,T2,T3>::showvalue()
{
    cout <<"P : "<< p<<endl;
    cout <<"q : "<< q<<endl;
    cout <<"r : "<< r<<endl;
}

int main()
{
    X<int,double,char>X1(50,10.99,'N');
    X<double,char,char*>X2(0.98765,'n',"Niton Computing Group");
    cout <<endl <<"Value of X1's Member variables...."<<endl;
    X1.showvalue();

    cout <<endl<<"value of x2's mmber variable...."<<endl;
    X2.showvalue();
}
