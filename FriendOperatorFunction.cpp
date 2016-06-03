#include<bits/stdc++.h>
using namespace std;
class Rect
{
    int length,width;
public:
    Rect(){length=width=0;}
    Rect(int length,int width);
    Rect operator++ ();
    Rect operator- (Rect r);
    void Show() {cout<< " Length : "<< length<<" Width : "<<width<<endl;}
    void Setlen(int I){length=I;}
    void Setwidth(int w){width=w;}
    int Getlen(){return length;}
    int Getwidth(){return width;}
    friend Rect operator+(Rect ob1,int p);
    friend Rect operator+(int p,Rect ob1);
};

Rect::Rect(int len,int w)
{
	length=len;
	width=w;
}

Rect Rect::operator - (Rect r)
{
	length-=r.Getlen();
	width-=r.Getwidth();
	return (*this);
}

Rect Rect :: operator++()
{
    length++;
    width++;
    return *this;
}

Rect operator+(Rect ob,int p)
{
	Rect temp;
	temp.Setlen(ob.Getlen()+p);
	temp.Setwidth(ob.Getwidth()+p);
	return temp;
}

Rect operator+(int p,Rect ob)
{
	Rect temp;
	temp.Setlen(ob.Getlen()+p);
	temp.Setwidth(ob.Getwidth()+p);
	return temp;
}

int main(int argc, char const *argv[])
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


    c=15+a;
    cout<< "\n After c=15+a,in objcet c"<<endl;
    c.Show();

	return 0;
}




