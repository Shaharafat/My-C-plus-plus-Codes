#include<iostream>
using namespace std;
int main()
{
    int i;
    int& ref=i; //datatype & reference_var_name= same_data_type_variable...
    i=10;
    cout<<i<<endl<<ref;
    i=15;
    cout<<endl<<ref;
}
