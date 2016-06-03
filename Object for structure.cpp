#include<iostream>
using namespace std;
struct A
{
    int a1;
    int a2[5];
};
class cA
{
    A A1;
    public:
    A A2;
    void Aprint()
    {
        A1.a1=5;
        A1.a2[0]=11;
        A1.a2[1]=22;
        A1.a2[2]=33;
        A1.a2[3]=44;
        A1.a2[4]=55;

    cout<<"\nValue of A1 in member function: ";
    cout<<"\nA1.a1= "<<A1.a1;
    cout<<"\nA1.a2[5]= ";
    for(int i=0;i<5;i++)
    {
        cout<<A1.a2[i]<<",";
    }

    cout<<"\n Value of A2 from main() function: ";
    cout<<"\nA2.a1= "<<A2.a1;
    cout<<"\nA2.a2[5]= ";
    for(int i=0;i<5;i++)
    {
        cout<<A2.a2[i]<<",";
    }
}};
int main()
{
    class cA a1;
    cout<<"\nenter vlaue for A2.a1: ";
    cin>>a1.A2.a1;
    cout<<"\nEnter Five Value for A2.a2[]: ";
    for(int i=0;i<5;i++)
    cin>>a1.A2.a2[i];
    a1.Aprint();
}
