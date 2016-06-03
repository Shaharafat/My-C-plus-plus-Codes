#include<iostream>
using namespace std;
int x=20;
int main()
{
    int x=10;
    cout<<"x = "<<::x; /*scope resulation operator calls the global variable*/
}
