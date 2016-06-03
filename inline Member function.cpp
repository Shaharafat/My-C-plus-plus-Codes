#include<iostream>
using namespace std;
class adds
{
    public:
    int a,b;
    void add(int x,int y);
};

void adds::add(int x,int y)
{
    int c=x+y;
    cout<<c;
}

int main()
{
    adds smp;
    smp.add(10,20);

}
