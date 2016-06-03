#include<iostream>
using namespace std;
class sample
{
    public:
    static int totobj;
    static void printinfo()
    {
        cout<<"\nTotal Object: "<<totobj<<"\n";
    }

};
int sample::totobj=0;
int  main()
{
    sample::totobj=10;
    sample::printinfo();
}
