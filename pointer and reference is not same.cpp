#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int& ref=i;
    int *ptr=&i;
    cout<<"i"<<i<<endl<<"ref"<<ref<<endl<<"ptr"<<ptr<<endl;
    ++ref;
    cout<<"i"<<i<<endl<<"ref"<<ref<<endl<<"ptr"<<ptr<<endl;
    ++(*ptr);
    cout<<"i"<<*ptr<<endl<<"ref"<<ref<<endl<<"ptr"<<ptr<<endl;
    ++ptr;
    cout<<"i"<<i<<endl<<"ref"<<ref<<endl<<"ptr"<<ptr<<endl;
}
