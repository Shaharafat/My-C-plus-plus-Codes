#include<iostream>
using namespace std;

class A
{
    private:
        int x;
        int y;
    public:
    void Add_xy(void);;

};

void A::Add_xy(void)
{
    x=y=5;
    cout<<"X+Y= "<<x+y;
}
int main()
{
    A ob1;

    ob1.Add_xy();
}
