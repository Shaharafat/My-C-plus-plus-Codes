#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void setAB(int x,int y)
    {
        a=x;
        b=y;
    }
    int getAtimesB()
    {
        return a*b;
    }
};

int AtimesBtimes10(test t)
{
    t.setAB(10,10);
    return (t.getAtimesB()*10);
}

int main()
{
    test tst;
    tst.setAB(15,15);
    cout<<"\nA*B*10= "<<AtimesBtimes10(tst);
    cout<<"\nA*B= "<<tst.getAtimesB();
}
