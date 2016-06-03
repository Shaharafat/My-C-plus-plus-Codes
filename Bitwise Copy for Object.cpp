#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char s_name[14];
    char s_id[10];
    float s_cgpa;
    public:
    void getinfo(char *name,char *id,float cgpa)
    {
        strcpy(s_name,name);
        strcpy(s_id,id);
        s_cgpa=cgpa;
    }
    void show()
        {
            cout<<"Name: "<<s_name<<endl;
            cout<<"ID: "<<s_id<<endl;
            cout<<"CGPA: "<<s_cgpa<<endl;

        }
};
int main()
{
    student A,B;
    A.getinfo("BM Morshed","23546789",3.79);

B=A;
cout<<"\nPrinting Object A infomation : \n\n";
A.show();
cout<<"\nPrinting object B information : \n\n";
B.show();
}
