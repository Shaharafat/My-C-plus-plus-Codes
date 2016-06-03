#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void Msg()
    {
        cout << "\'Msg()\' from \'base\' class.." << endl;
    }
};

class derived : public base
{
public:
    void Msg()
    {
        cout << "\'Msg()\' from \'derived\' class.." << endl;
    }
};

int main()
{
    derived d1;
    d1.Msg();
    return 0;
}
