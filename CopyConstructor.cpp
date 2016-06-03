#include<iostream>
#include<string.h>
using namespace std;
class StringLength
{
    public:
    char *p;
    void print()
    {
        cout<<"\t"<<p<<"\tLength is: "<<strlen(p)<<'\n';
    }
    StringLength()
    {
        p=new char[50];
    }
    StringLength(StringLength &);
};

StringLength::StringLength(StringLength& str)
{
    strcpy(p,str.p);
}

int main(void)
{
    StringLength str1;
    strcpy(str1.p,"Str1: M.Kamruzzaman");
    cout<<("Before Assigning: \n");
    str1.print();
    StringLength str2=str1;
    strcpy(str1.p,"Str1:B.M.Morshed");
    cout<<"\nAfter Assigning: \n";
    str1.print();
    str2.print();
}
