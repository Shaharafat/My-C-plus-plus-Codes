#include<bits/stdc++.h>
using namespace std;
class Rect
{
    int length,width;
    public:

    Rect(){length=width=0;}
    Rect(int len,int wth);
    Rect operator++ ();
    void Show() {cout<< " Length : "<< length<<" Width : "<<width<<endl;}
};

Rect :: Rect(int len,int wth)
{
    length=len;
    width=wth;
}

Rect Rect :: operator++()  //defininf Operator Function...
{
    length++;
    width++;
    return *this; // returning This pointer...
}

int main()
{
     Rect a(20,10),b,c;
     a.Show();


     c=a;
     ++c;  //calling Operator Function...
     cout << "\nAfter ++,in object c: "<<endl;
     c.Show();

     return 0;
}
