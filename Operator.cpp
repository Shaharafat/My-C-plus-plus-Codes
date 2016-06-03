#include<bits/stdc++.h>
using namespace std;
class Rect
{
    int length,width;
public:
    Rect(){length=width=0;}
    Rect(int length,int width);
    Rect operator+ (int p);
    Rect operator- (int p);
    Rect operator- (Rect r);
    Rect operator++ ();
    Rect operator+= (Rect op);

    void Show() {cout<< " Length : "<< length<<" Width : "<<width<<endl;}
    void Setlen(int I){length=I;}
    void Setwidth(int w){width=w;}
    int Getlen(){return length;}
    int Getwidth(){return width;}
    virtual ~Rect(){};
};


Rect::Rect(int len,int w)
{
    length=len;
    width=w;
}
Rect Rect :: operator + (int p)
{
    Rect temp;
    temp.Setlen(p+length);
    temp.Setwidth(p+width);
    return temp;
}

Rect Rect::operator - (int p)
{
    Rect temp;
    temp.Setlen(length - p);
    temp.Setlen(width - p);
    return temp;
}

Rect Rect :: operator - (Rect r)
{
    length-=r.Getlen();
    width-=r.Getwidth();
    return *this;
}

Rect Rect :: operator++()
{
    length++;
    width++;
    return *this;
}

Rect Rect :: operator += (Rect op)
{
    length += op.Getlen();
    width += op.Getwidth();
}

int main()
{
    Rect a(20,10),b,c;
    cout<< "At the begining ,in object a"<<endl;
    a.Show();

    b=a+25;
    cout<< "\nAfter b=a+25,in Obejct b"<<endl;
    b.Show();

    b=b-a;
    cout<< "\nAfter b=b-a,in object b"<<endl;
    b.Show();

    c=b-5;
    cout<< "\nAfter c=b-5,in Object c"<<endl;
    c.Show();


    a+=c;
    cout<< "\nAfter a+=c,in Object a"<<endl;
    a.Show();
}
