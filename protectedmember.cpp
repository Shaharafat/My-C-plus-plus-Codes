#include<bits/stdc++.h>
using namespace std;
class sample
{
private:
    int a;
protected:
    int b;
public:
    int c;
    sample(){a=10;b=10;c=10;}
    void sum(){cout<< "a+b+c = "<<a+b+c<<endl;}
};

int main()
{
    sample smp;
    smp.c=100;
    smp.sum();
}
