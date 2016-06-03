#include<iostream>
using namespace std;
int main()
{
    bool getresult;
    int x=5,y=10,z=15;
    cout<<"X= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;
    getresult=x>y;
    cout<<"Result of Getresult=X>Y: "<<getresult<<endl;
    getresult=y<z;
    cout<<"Result of Getresult=Y<Z: "<<getresult<<endl;
    x=x+z-y;
    cout<<"Result of Getresult=X+Z-Y: "<<getresult<<endl;
    getresult=true;
    cout<<"Result of Getresult=true: "<<getresult<<endl;
    getresult=false;
    cout<<"Result of Getresult=false: "<<getresult<<endl;
    return 0;
}
