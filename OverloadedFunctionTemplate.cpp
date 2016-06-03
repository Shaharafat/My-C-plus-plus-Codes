#include<bits/stdc++.h>
using namespace std;
template <class T1>
void show(T1 t1)
{
    cout << "Overloaded Function with one parameter" <<endl;
}

template <class T1,class T2>
void show(T1 t1,T2 t2)
{
    cout << "Overloaded Function with two parameter" <<endl;
}

template <class T1,class T2,class T3>
void show(T1 t1,T2 t2,T3 t3)
{
    cout << "Overloaded Function with three parameter" <<endl;
}

int main()
{
    show("Nion");
    show("Nion",10);
    show("Nion",10,30);
}
