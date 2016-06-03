#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int b1;
public:
    int b2;
};
class derived1:protected base
{
public:
    void showsum()
    {
        b1=50;
        b2=50;
        cout<< b1+b2 <<endl;
    }
};
int main()
{
    derived1 d1;
    d1.showsum();
}
