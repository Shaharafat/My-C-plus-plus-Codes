#include<iostream>
#include<string.h>
using namespace std;
class person
{
    char name[25];
    public:
    person(char *n)
    {
        strcpy(name,n);
    }
    void printName()
    {
        cout<<"\nName: "<<name<<endl;
    }
};
int main()
{
    person ob[5]={"Rana","Nahid","Rokib","Shantonu","Tuhin"};
    for(int i=0;i<5;i++)
    ob[i].printName();
}
