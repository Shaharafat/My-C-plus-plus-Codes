#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    static int x,y;
    public:
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"x= "<<x<<"y= "<<y<<endl;
    }
};
int sample::x;
int sample::y;
int main()
{
    sample smp1,smp2;
    smp1.setxy(100,50);
    smp2.setxy(200,100);
    smp2.print();
    smp1.print();
}

