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
    void Add_AB(int p)
    {
        cout<<"\nObj["<<p<<"]: a+b ="<<a+b;
    }
};

void print(AddAB *ob);
int main()
{
    AddAB obj[3]={AddAB(3,3),AddAB(9,6),AddAB(2,5)};
    print(obj);
}
void print(AddAB *ptr)
{
    for(int i=0;i<3;i++)
    {
        ptr->Add_AB(i);
        ptr++;
    }
}
