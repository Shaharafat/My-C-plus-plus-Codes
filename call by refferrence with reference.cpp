#include<iostream>
using namespace std;
void changvalue(int & val)
{
    val=15;
}
int main()
{
    int i=10;
    cout<<"Before calling change value(): i= "<<i<<endl;
    changvalue(i);
    cout<<"After  calling change value(): i= "<<i<<endl;
}
