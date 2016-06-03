#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    static int totobj;
    public:
    sample()
    {
        totobj++;
    }
    ~sample()
    {
        totobj--;
    }
    static void printinfo()
    {
        cout<<"\ntotal Object: "<<totobj<<"\n";
    }
};
int sample::totobj=0;
int main()
{
    sample s1,s2,s3,s4,s5;
    sample::printinfo();
}

