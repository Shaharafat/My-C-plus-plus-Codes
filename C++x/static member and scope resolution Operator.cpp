#include<iostream>
using namespace std;

class sample
{

    public:
    static int Totobj;
    static void printinfo()
    {
        cout<<"\nTotal Object : "<<Totobj<<endl;
    }
};
int sample::Totobj=0;
int main()
{
    sample::Totobj=10;
    sample::printinfo();

}

