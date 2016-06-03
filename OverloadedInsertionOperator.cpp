#include<bits/stdc++.h>
using namespace std;
class X
{
    char name[25];
    float height;
    float weight;
public:
    X()
    {
        strcpy(name,"Niton");
        height=160;
        weight=118;
    }
    X(char *n,float h,float w);

    friend void operator << (ostream &os,X x);
};

X::X(char *n,float h,float w)
{
    strcpy(name,n);
    height=h;
    weight=w;
}

void operator << (ostream& os,X x)
{
    os << "Name : "<<x.name<<endl;
    os << "Height : "<<x.height<<endl;
    os << "Weight : "<<x.weight<<endl<<endl;
}
int main()
{
    X x1,x2("Rokib",float(158),float(138));
    cout<< "Contents of X1 : "<<endl;
    cout<< x1;
    cout<<"Contents of x2 : "<<endl;
    cout<<x2;
}
