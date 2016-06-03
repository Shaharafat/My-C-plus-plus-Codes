#include<iostream>
#include<string.h>
using namespace std;
class ObjRet
{
    char name[25];
    public:
    void GetName(char* n)
    {
        strcpy(name,n);
    }
    void PrintName(void)
    {
        cout<<"\n\nSo your Name is: "<<name<<endl;
    }
};
ObjRet funcA()
{
    char getName[25];
    ObjRet Ob;
    cout<<"Enter Your Name: ";
    cin>>getName;
    Ob.GetName(getName);
    return Ob;
}
int main()
{
    ObjRet obMain;
    obMain=funcA();
    obMain.PrintName();
}
