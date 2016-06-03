#include<iostream>
using namespace std;
int main()
{
    union
    {
        int day,month,year;
    };//in anonymus union and enum,u do not need to declare any tagname.
    day=20;
    cout<<day<<endl;
}
