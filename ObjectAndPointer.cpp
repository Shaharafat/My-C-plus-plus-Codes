#include<iostream>
using namespace std;
class AddAB
{
    int a,b;
    public:
    AddAB(int x,int y)
    {
        a=x;
        b=y;
    }
    void Add_AB(int i)
    {
        cout<<"\nObj["<<i<<"]: a+b = "<<a+b;
    }
};
int main()
{
    AddAB obj[3]={AddAB(3,3),AddAB(9,6),AddAB(2,5)};
    AddAB *ptr;
    ptr=obj;
    for(int i=0;i<3;i++)
    {
        ptr->Add_AB(i);
        ptr++; //Note Note Note
    }
}
