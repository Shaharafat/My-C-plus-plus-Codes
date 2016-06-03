#include<bits/stdc++.h>
using namespace std;
template<class T>
class X
{
    public:
    T p;
    X(T a)
    {
        p =a;
    }
    void show();
};
template <class T>
void X <T>::show()
{
    cout << "The value is : " <<p<<endl;
}

int main()
{
    X<int> b(10);
    b.show();
}

