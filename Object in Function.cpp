#include<iostream>
#include<string.h>
using namespace std;


void useobject(char *name,char *id,float cgpa)
{
    class student
{
    public:
    char S_name[20];
    char S_id[15];
    float S_cgpa;
    void show()
    {
        cout<<"Name: "<<S_name<<endl;
        cout<<"  Id: "<<S_id<<endl;
        cout<<"CGPA: "<<S_cgpa<<endl;
    }
};
    student A;
    strcpy(A.S_name,name);
    strcpy(A.S_id,id);
    A.S_cgpa=cgpa;
    A.show();
}

int main()
{
    useobject("M.Kamruzzaman","87947546",3.49);
}
