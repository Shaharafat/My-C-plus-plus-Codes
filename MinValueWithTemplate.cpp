#include<bits/stdc++.h>
using namespace std;
template <class Type>
Type Minvalue(Type a,Type b)
{
    if(a<b)
        return a;
    else
        return b;
}
char *Minvalue (char *str1,char *str2)//Function Returns pointer....
{
    if(strcmp(str1,str2)>0)
        return str2;
    else
        return str1;
}

int main()
{
    int t=strcmp("Home computing","Home Computing");
    cout<< t<<endl;
    cout << "MinValue(50,5)          is : "<< Minvalue(50,5)<<endl;
    cout<< "MinValue(0.998,0.997)          is : "<< Minvalue(0.998,0.997)<<endl;
    cout<< "MinValue(\'N\',\'n\')          is : "<< Minvalue('N','n')<<endl;
    cout<< "MinValue(\'Niton\',\'Arafat\')          is : "<< Minvalue("Niton","Arafat")<<endl;
}
