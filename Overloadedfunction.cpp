#include<iostream>
#include<conio.h>
using namespace std;
int xy(int x,int y)
{
    return x+y;
}
float xy(float x,float y)
{
    return x+y;
}
double xy(double x,double y)
{
    return x+y;
}
int main()
{
   cout<< xy(10,5)<<endl;
   cout<< xy(10.213,12.123)<<endl;
   cout<< xy(121.234326543,201.43232314)<<endl;

}
