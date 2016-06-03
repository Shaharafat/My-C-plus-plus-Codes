#include<bits/stdc++.h>
using namespace std;
class A
{
    static int length,width;
public:
    A(){cout << "Constructing...." << endl;}
    int result;
    int area(int len,int wdth)
    {
        length = len;
        width = wdth;
    }
    void show()
    {
        cout << "length: " << length << endl << "Width: " << width << endl;
    }
    static void rslt(){cout<< 10*10 <<endl;}
    ~A(){cout << "Destructing...."<<endl;}
};

int  A :: length;
int A :: width;

int main()
{
    A a1,a2;
    a1.area(100,100);
    a1.show();
    a2.show();
    A::rslt();

}
