#include<iostream>
using namespace std;
class ConDes
{
    public:
    ConDes()
    {
        cout<<"\tConstructing..."<<endl;
    }
    ~ConDes()
    {
        cout<<"\tDestructing..."<<endl;
    }
};
void SampleFunction(void)
{
    cout<<"\n\n\tObject Creating in SampleFunction()"<<endl;
    ConDes SF;
    cout<<"\n\tReturn to MAIN() from Samplefunction\n";
}


int main()
{
    cout<<"\nObject creating in MAIN()\n";
    ConDes MAIN;
    cout<<"\n\tCalling SampleFunction....";
    SampleFunction();
    cout<<"\nEnd of MAIN()";
}
