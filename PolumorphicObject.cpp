#include<bits/stdc++.h>
using namespace std;
class shape
{
public:
    virtual void type(){cout << "This is shape object..."<<endl; }
};

class circle : public shape
{
    public:
    void type(){cout << "This is circle object..."<<endl; }
};

class rectangle : public shape
{
    public:
    void type(){cout << "This is rectangle object..."<<endl; }
};

class polygon : public shape
{
     public:
    void type(){cout << "This is polygon object..."<<endl; }
};

int main()
{
    shape *ptr;
    circle c;
    rectangle r;
    polygon p;

    ptr = &c;
    ptr->type();

    ptr=&r;
    ptr->type();

    ptr=&p;
    ptr->type();

    c.type();
    r.type();
    p.type();
    return 0;
}
