#include<iostream>
using namespace std;
struct Courseinfo
{
    char *id;
    int credit;
    float gpa;
    Courseinfo *next;
};

int main()
{
    Courseinfo *course;
    course=new Courseinfo;
    course->credit=3;
    cout<<course->credit;
    delete course;
}
