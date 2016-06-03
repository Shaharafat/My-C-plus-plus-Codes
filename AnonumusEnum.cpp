#include<iostream>
using namespace std;
int main()
{
    union
    {
        int id;
        int roll;
    };
    id=10;
    roll=123425;
    cout<<ends<<roll;
}
