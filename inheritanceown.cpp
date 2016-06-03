#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char Name[64]="Arafat";
    char Id[12]="778698";
public:

    void showstudentinfo(void)
    {
        cout<< "\nName : "<<Name<<endl;
        cout<< "   ID : "<<Id<<endl;
    }
};

class registration:public student
{
    float regfees=33.28;
    char *regdate="03/25/1996";
public:
    void showreginfo(void)
    {
        showstudentinfo();
        cout<< " Fees : "<<regfees<<endl;
        cout<< " Date : "<<regdate<<endl;
    }
};
int main()
{
    registration niton;
    niton.showstudentinfo();
    niton.showreginfo();
}

