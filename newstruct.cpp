#include<bits/stdc++.h>
using namespace std;
int main()
{
  struct student
  {
    char name[25];
    char id[10];
    char dept[5];
    float cgpa;
  };
  student *ptr;
  ptr=new student;
  strcpy(ptr->name,"Md. Shah Arafat");
  strcpy(ptr->id,"ACSE1");
  strcpy(ptr->dept,"CSE");
  ptr->cgpa=4.00;
  cout<<"Name : "<<ptr->name<<endl;
  cout<<"id : "<<ptr->id<<endl;
  cout<<"Dept : "<<ptr->dept<<endl;
  cout<<"CGPA : "<<ptr->cgpa<<endl;
  return 0;
}
