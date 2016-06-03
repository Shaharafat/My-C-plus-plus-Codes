#include<iostream>
using namespace std;
class A
{
    private:
    int x,y;
    public:
    void add_xy(void);
};
void A::add_xy(void)
{
    x=y=5;
    cout<<"X+Y = "<<x+y;
}
int main()
{
    A obj;
    obj.add_xy();
}
