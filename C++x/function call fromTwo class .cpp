#include<iostream>
using namespace std;
class A
{
    public:

        void FuncA1()
            {
                cout<<"This is FuncA1() in class A"<<endl;
            }
        void FuncA2()
            {
                cout<<"This is FuncA2() in class B"<<endl;
            }

};
class B
{
    A a1;
    public:
        void FuncB1()
            {
                cout<<"This is FuncB1() in class B calling FuncA1() from class A:"<<endl;
                a1.FuncA1();//Calling funca1() from class A
            }
            void FuncB2()
            {
                cout<<"This is FuncB2() in class B"<<endl;
            }
};
int main()
{
   B b1;
   b1.FuncB1();
}
