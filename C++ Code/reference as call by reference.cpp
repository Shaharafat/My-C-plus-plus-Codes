#include<iostream>
using namespace std;
void change(int& val);
int main()
{
    int i=10;
    cout<<"Before calling change(): i= "<<i<<endl;
    change(i);
    cout<<"After calling change(): i= "<<i<<endl;
}

void change(int& val)
{
    val=15;
}


