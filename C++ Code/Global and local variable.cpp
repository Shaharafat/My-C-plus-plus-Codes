#include<iostream>
using namespace std;
int x;
void change()
{
    x=20;
}
int main()
{
    int x;
    x=10;
    change();
    cout<<"Value of x is: "<<::x;
    return 0;
}
