#include<iostream>
using namespace std;

class A
{
    int PrvA1;
    public:
        A()
        {
            PrvA1=0;
        }
        void GetPrvA1(int x)
        {
            PrvA1=x;
        }
        friend class B;
};

class B
{
    int PrvB1;
    public:
        B()
        {
            PrvB1=0;
        }
        void GetPrvB1(A &b)
        {
            PrvB1=b.PrvA1+25;
            b.PrvA1=50;
        }
        void ShowPrvB1(A b)
        {
            cout<<"\nValue of PRVA1="<<b.PrvA1<<"\n";
            cout<<"\nValue of PrvB1="<<PrvB1<<"\n";
        }
};

int main()
{
    A a1;
    B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(a1);
    b1.ShowPrvB1(a1);
}
