#include<bits/stdc++.h>
using namespace std;
class person
{
    char name[25];
    public:
    void GetName(char *n)
    {
        strcpy(name,n);
    }
    char *GetName(void)
    {
        return name;
    }
    void PrintName(void)
    {
        cout<<"\nName: "<<name;
    }
};
void NameLength(person Ob[]);
int main()
{
    person obj[4];
    char getName[25];
    cout<<"\nEnter four name: \n";
for(int i=0;i<4;i++)
{
    cout<<"\nName["<<i+1<<"]:";
    cin>>getName;
    obj[i].GetName(getName);
}
cout<<"\nLength of four Name: \n";
NameLength(obj);
}

void NameLength(person Obj[])
{
    int len;
    for(int i=0;i<4;i++)
    {
        len=strlen(Obj[i].GetName());
        Obj[i].PrintName();
        cout<<"\tLength: "<<len;
    }
}
