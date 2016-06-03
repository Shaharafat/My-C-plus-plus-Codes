#include<iostream>
#include<string.h>
using namespace std;
class stringlength
{
    public:
    char *p;
    void print()
    {
        cout<<"\t"<<p<<"Length is : "<<strlen(p)<<'\n';
    }
    stringlength()
    {
        p=new char[50];
    }
};
int main()
{
    stringlength str1,str2;
    strcpy(str1.p,"String1 is: Hello How are u?");
    strcpy(str2.p,"String2 is: I am Fine.");
    cout<<"Before Assigning: \n";
    str1.print();
    str2.print();
    str2=str1;
    strcpy(str1.p,"This string Assigned to str1");
    cout<<"\n\nAfter Assigning: \n";
    str1.print();
    str2.print();
}
