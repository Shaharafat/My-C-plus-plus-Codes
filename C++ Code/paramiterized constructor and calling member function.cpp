#include<iostream>
using namespace std;

class sample
{
    int x,y;
    public:
        sample(int a,int b)
            {
                x=a;
                y=b;
                add();
            }
         void add()
         {
             cout<<"X+Y="<<x+y<<endl;
         }
};
int main()
{
    sample smp(10,20);
}
