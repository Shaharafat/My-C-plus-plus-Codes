#include<iostream>
using namespace std;
class Test
{
    int *a;
    public:
    Test(int x)
    {
        a=new int;
        *a=x;
    }
    int GetA()
    {
        return *a;
    }
    ~Test()
    {
        delete a;
    }
};

int Apow2(Test t)
{
    return((t.GetA())*(t.GetA()));
}
int main()
{
    int i;
    Test tst(10);
    cout<<"\nA^2= "<<Apow2(tst);
    cout<<"\n"<<tst.GetA();

}

