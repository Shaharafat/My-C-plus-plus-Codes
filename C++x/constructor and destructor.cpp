#include<iostream>
using namespace std;

class sample
{
    public:
        sample();
        ~sample();
};

sample::sample()
{
    cout<<"\tMessage from Constructor"<<endl;
}
sample::~sample()
{
    cout<<"\tMessage from Destructor"<<endl;
}

void FuncA(void)
{
    cout<<"creating Sample object"<<endl;
    sample smp;
}

int main()
{
    cout<<"Creating Sample object in main()"<<endl;
    sample smp;
    cout<<"Calling FuncA()"<<endl;
    FuncA();
    cout<<"FuncA Called"<<endl;
	return 0;
}
