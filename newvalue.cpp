#include<bits/stdc++.h>
using namespace std;
class student
{
   char name[25];
   char id[10];
   float cgpa;
   public:
   student(char *getname,char *getid,float getcgpa)
   {
      strcpy(name,getname);
      strcpy(id,getid);
      cgpa=getcgpa;
   }
   void showinfo()
   {
      cout<<"Name : "<<name<<endl;
      cout<<"ID   : "<<id<<endl;
      cout<<"GPA  : "<<cgpa<<endl;
   }
};
int main()
{
   int *lptr;
   lptr=new int (50);
   cout<<"Integer Value: "<<*lptr<<endl<<endl;
   student *sptr;
   sptr=new student("Md. Shah Arafat","354",float(4.00));
   sptr->showinfo();
   return 0;
}
