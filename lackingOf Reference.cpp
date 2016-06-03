#include<iostream>
using namespace std;
void increment(int& value)
{
    value++;
}
void decrement(int *value)
{
    (*value)--;
}
int main()
{
    int val=10;
    increment(val);
    cout<<"after increment(),val is: "<<val<<endl;
    decrement(&val);
    cout<<"After decrement(),val is : "<<val<<endl;

}
