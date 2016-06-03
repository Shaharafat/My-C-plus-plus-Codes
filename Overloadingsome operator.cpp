#include<bits/stdc++.h>
using namespace std;
class String
{
    char *str;
    int length;
public:
    String(const char *s);
    char operator [] (int i);
    ~String(){delete [] str;}
};

String :: String(const char *s)
{
    int len=0;
    while(*(s+len))
        len++;
    str=new char [len+1];
    for(int i=0;i<len;i++)
        *(str+1)=*s++;
    *(str+len)=NULL;
    length=len;
}
char String :: operator [] (int i)
{
    if(i<0 || i>length)
    {
        cout<< "\nOut of array boundary.";
        return NULL;
    }
    return str[i];
}

int main()
{
    String o("String Created");
    int i=0;
    while(o[i])
        cout<<o[i++];
}
