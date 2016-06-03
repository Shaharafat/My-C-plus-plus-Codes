#include<bits/stdc++.h>
using namespace std;
class listelement
{
    int i;
    public:
    listelement()
    {
        cout<<"Constructing..."<<endl;
    }
    void setval(int x){i=x;}
    int getval(){return i;}
    listelement *nextelement;
    ~listelement()
    {
        cout<<"Destructing..."<<endl;
    }
};

int main()
{
    listelement le1;
    le1.setval(10);
    cout<<"Value in le1 : "<<le1.getval()<<endl;
    le1.nextelement= new listelement;
    (le1.nextelement)->setval(50);
    cout<<"Value in le1's pointed element : "<<(le1.nextelement)->getval()<<endl;
    delete le1.nextelement;
}
