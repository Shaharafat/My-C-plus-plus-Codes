#include<bits/stdc++.h>
using namespace std;
class String
{
    char *str;
    int length;
public:
    String(int len=127);
    void setString(char *p);
    char *getString(){return str;}
    void *operator new(size_t size);
    void operator delete(void *p);
    ~String(){delete [] str;}
};

void String::setString(char *p)
{
    int len=strlen(p);
    if(len>length)
    {
        cout<< "\nError: Small buffer ,so String is truncated";
        strncpy(str,p,length);
        str[length]='\0';
    }
    else
        strcpy(str,p);
}

String :: String(int len)
{
    str=new char[len+1];
    length=len;
}

void *String :: operator new(size_t size)
{
    void *p;
    p=malloc(size);
    return p;
}

void String::operator delete(void *p)
{
    free (p);
}

int main()
{
    String *o;
    o=new String (25);
    o->setString("Hello World");
    cout<<o->getString();
    o->setString("wellcome to Niton's Bangla C++ book");
    cout<<endl<<o->getString();
    delete o;
}
