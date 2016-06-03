#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    private:
    int x,y;
    public:
    sample(int a ,int b)
    {
        x=a;
        y=b;
        Add();
    }
    void Add()
    {
        cout<<"\nX+Y= "<<x+y<<endl;
    }
};
int main()
{
    sample smp(10,5);
    smp.Add();
}
