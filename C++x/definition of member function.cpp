#include<iostream>
using namespace std;
class Add
{
    int x,y;
    public:
        void Ad(int a,int b)
        {
            x=a;
            y=b;
        }
        void Adxy(void);

};
void Add::Adxy(void)
        {
            cout<<"x+y= "<<x+y<<endl;
        }
int main()
{
    Add x;
    x.Ad(5,17);
    x.Adxy();
}
