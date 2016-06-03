#include<iostream>
using namespace std;
int main()
{
    struct date
    {
        int day,month,year;
    };
    date d;
    d.day=10;
    d.month=11;
    d.year=2012;
    cout<<d.day <<d.month <<d.year<<endl;
}
