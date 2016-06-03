#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char Name[64];
    char Id[12];
public:
    student(char *name,char *id)
    {
        strcpy(student::Name,name);
        strcpy(student::Id,id);
    }
    void showstudentinfo(void)
    {
        cout<< "\nName : "<<Name<<endl;
        cout<< "   ID : "<<Id<<endl;
    }
};

class registration:public student
{
    float regfees;
    char *regdate;
public:
    registration(char *name,char *id,float fees,char *date):student(name,id)
    {
        regfees=fees;
        strcpy(registration::regdate,date);
    }
    void showreginfo(void)
    {
        showstudentinfo();
        cout<< " Fees : "<<regfees<<endl;
        cout<< " Date : "<<regdate<<endl;
    }
};
int main()
{
    registration niton("ShahArafat","8765468",33275.00,"01/01/1996");
    niton.showstudentinfo();
    niton.showreginfo();
}
