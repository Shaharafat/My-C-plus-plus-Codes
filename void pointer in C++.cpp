#include<iostream>
using namespace std;
int main()
{
    void *ptrvoid;
    int x=10,*ptrint;
    ptrvoid=&x;
    ptrint=(int*)ptrvoid;
    cout<<ptrvoid<<endl<<ptrint;

}
