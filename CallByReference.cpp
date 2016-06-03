#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void valofx(int a)
    {
        x=a;
    }
    int getx()
    {
        return x;
    }
};
void pow2ofA(test *);
int main()
{
    test tst;
    tst.valofx(10);
    cout<<"\nBefore Function Calling Value of X is: "<<tst.getx();
    pow2ofA(&tst);
    cout<<"\nAfter Function Calling Value of X is: "<<tst.getx();
}
void pow2ofA(test *t)
{
    t->valofx(t->getx()*t->getx());
}
