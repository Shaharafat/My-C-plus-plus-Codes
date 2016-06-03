#include<bits/stdc++.h>
using namespace std;
template <class Type>
void Add(Type a,Type b)
{
    cout << "From Generated Function :      a+b = "<<a+b<<endl;
}
void Add(int a,int b)
{
    cout << "From Explicit Specialization:  a+b = "<<a+b<<endl;
}

int main()
{
    Add(10.300,50.321);
    Add(10,20);
}
