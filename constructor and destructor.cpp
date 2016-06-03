#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    public:

        sample()
        {
            cout<<"\nMessage from Constructor";
        }
        ~sample()
        {
            cout<<"\nMessage from Destructor";
        }
    };
    void funcA()
    {
        cout<<"\ncreating smaple object in funcA()";
        sample smp;
    }

    int main()
    {
        cout<<"\nCreating sample object in main()";
        sample smp;
        cout<<"\nCalling funcA()";
        funcA();
        cout<<"\nFuncA() called";
        getch();
    }

