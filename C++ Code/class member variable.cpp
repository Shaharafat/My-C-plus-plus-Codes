#include<iostream>
using namespace std;

class Simpleaddition
{
    public:
    int a,b;
    int Add()
        {
            return (a+b);
        }
};
int main()
{
  Simpleaddition SA;
  SA.a=10;
  SA.b=20;
  cout<<"A+B= "<<SA.Add();
}
