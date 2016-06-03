#include<iostream>
using namespace std;
int addxy(int x,int y)
{
    return x+y;
}
float addxy(float x,float y)
{
    return x+y;
}
double addxy(double x,double y)
{
    return x+y;
}
int main()
{
    cout<<"Integer x+y= "<<addxy(5,5)<<endl;
    cout<<"Float x+y= "<<addxy(5.754,5.223)<<endl;
    cout<<"Double x+y= "<<addxy(5.456776556,9.457667876545)<<endl;
}
