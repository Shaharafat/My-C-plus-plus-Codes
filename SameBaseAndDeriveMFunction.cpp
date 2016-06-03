#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void showmsg()
    {
        cout<< "Hello Arafat: This is Function from Base Class."<<endl;
    }
};
class derived : public base
{
public:
    void showmsg()
    {
        cout<< "Hello Arafat: This is Function form Derived Class."<<endl;
    }
};
int main()
{
    derived d1;
    d1.showmsg();
}
