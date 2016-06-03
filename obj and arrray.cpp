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
void NameLength(person Obj)
{
    int len;
    len=strlen(Obj.GetName());
    Obj.PrintName();
    cout<<"\tLength: "<<len;
}
int main()
{
    person obj[4];
    char getName[25];
    cout<<"\nEnter four Name:\n\n";
    for(int i=0;i<4;i++){
    cout<<"\nName["<<i+1<<"]: ";
    cin >> getName;
    obj[i].GetName(getName);
    }
    cout<<"\nLength of four name: \n";
    for(int j=0;j<4;j++)
    NameLength(obj[j]);
}
