#include<iostream>
using namespace std;
class B;
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
        friend void showPrvValue(A a,B b);
};
class B
{
    int PrvB1;
    public:
        B()
        {
            PrvB1=0;
        }
        void GetPrvB1(int x)
        {
            PrvB1=x;
        }
        friend void showPrvValue(A a,B b);
};
void showPrvValue(A a,B b){
    cout<<"\nValue of PrvA1 = "<<a.PrvA1<<ends;
    cout<<"\nValue of PrvB1 = "<<b.PrvB1<<ends;
}
int main()
{
    A a1;
    B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(50);
    showPrvValue(a1,b1);
}
