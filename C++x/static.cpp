#include<iostream>
using namespace std;
class Sample
{
    static int x,y;
public:
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void printxy()
    {
        cout<<"X= "<<x<<" Y= "<<y<<endl;
    }
};

int Sample::x;
int Sample::y;

int main()
{
    Sample smp1,smp2;
    smp1.setxy(100,200);
    smp1.printxy();
    smp2.printxy();
}
