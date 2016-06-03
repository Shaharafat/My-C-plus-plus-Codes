#include<bits/stdc++.h>
using namespace std;
int Add(int a,int b);
float Add(float a,float b);
int main()
{
    int ix = Add(20,30);
    float fx = Add(float (22.7),float (23.5)); //basically, if you declare without casting ,the argument will take as double...
    cout<< "\n\t"<< ix << "\t" <<fx << endl;
}

int Add(int a,int b)
{
    return (a+b);
}

float Add(float a,float b)
{
    return (a+b);
}

