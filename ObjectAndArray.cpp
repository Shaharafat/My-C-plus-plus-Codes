#include<iostream>
#include<string.h>
using namespace std;
class person
{
    char name[25];
    public:
    person()
    {
        cout<<"Constructing..."<<endl;
    }
    void PrintName()
    {
        cout<<"\nName: "<<name<<endl;
    }
    void GetName(char *n)
    {
        strcpy(name,n);
    }
    ~person()
    {
        cout<<"\nDestructing...";
    }
};
int main()
{
    person ob[5];
    ob[0].GetName("Rana");
    ob[1].GetName("Rokib");
    ob[2].GetName("Nahid");
    ob[3].GetName("Shantonu");
    ob[4].GetName("Tuhin");
    for(int i=0;i<5;i++)
    ob[i].PrintName();
}
