#include<iostream>
using namespace std;
class x
{
    int uccota,prosto;
public:
    x(){uccota=prosto=0;}
    x(int i,int j){uccota=i;prosto=j;}
    x operator+(int X);

    void sow()
    {
    cout<<uccota<<endl;
    cout<<prosto<<endl;
    }
};

x x::operator + (int X)
    {
        x temp;
        temp.uccota = uccota +X;
        temp.prosto = prosto + X;
        return temp;
    }
int main()
{
    x x2(100,200),x1;
    x1=x2+25;
    x2.sow();
    x1.sow();
    return 0;
}
