#include<iostream>
using namespace std;

class sample
{
    static int Totobj;
    public:
    sample()
    {
        Totobj++;
    }
    ~sample()
    {
        Totobj--;
    }
    void printinfo()
    {
        cout<<"\nTotal Object : "<<Totobj<<endl;
    }
};
int sample::Totobj=0;
int main()
{
    sample s1,s2,s3,s4,s5;
    s1.printinfo();
}
