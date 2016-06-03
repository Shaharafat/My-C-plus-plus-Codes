#include<iostream>
using namespace std;
template <class T1,class T2,class T3>
void show(T1 t1,T2 t2,T3 t3)
{
    cout << "t1: " << t1 <<endl;
    cout << "t2: " << t2 <<endl;
    cout << "t3: " << t3 <<endl<<endl;
}


int main()
{
    show("Arafat" ,"CSE" ,3.45);
    show("Arafat" ,"CSE" ,3.45);
    return 0;
}
