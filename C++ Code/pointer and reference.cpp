#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int& ref_i=i;
    int *ptr_i=&i;
    cout<<"i: "<<i<<endl<<"ref_i: "<<ref_i<<endl<<"ptr_i: "<<ptr_i<<endl;
    ++ref_i;
    cout<<"i: "<<i<<endl<<"ref_i: "<<ref_i<<endl<<"ptr_i: "<<ptr_i<<endl;
    ++(*ptr_i);
    cout<<"i: "<<*ptr_i<<endl<<"ref_i: "<<ref_i<<endl<<"ptr_i: "<<ptr_i<<endl;
    ++ptr_i;
    cout<<"i: "<<i<<endl<<"ref_i: "<<ref_i<<endl<<"ptr_i: "<<ptr_i<<endl;
    return 0;
}
