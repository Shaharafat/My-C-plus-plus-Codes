#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base(){cout<< "Base Constructor" <<endl;}
    ~base(){cout<< "Base Destructor" <<endl;}
};

class derived1 : public base
{
public:
    derived1(){cout<< "Derived1 Constructor" <<endl;}
    ~derived1(){cout<< "Derived1 Destructor" <<endl;}
};

class derived2 : public base
{
public:
    derived2(){cout<< "Derived2 Constructor" <<endl;}
    ~derived2(){cout<< "Derived2 Destructor" <<endl;}
};

class derived3 : public base
{
public:
    derived3(){cout<< "Derived3 Constructor" <<endl;}
    ~derived3(){cout<< "Derived3 Destructor" <<endl;}
};

int main()
{
    derived3 d3;
    derived2 d2;
    derived1 d1;
}

