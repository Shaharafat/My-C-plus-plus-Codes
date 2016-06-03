#include<bits/stdc++.h>
using namespace std;

class String
{
    void concat(int newlen);
    int maxlen,length;
    char *str;
public:
    int Getlen();
    char *GetString();
    void ShowString();
    void CCat(String &o);
    void CCat(char *s);
    String (const char *s);
    String (int len=127);
    virtual ~String();
};
String::String(const char *s)
{
    int len=0;
    while(*(s+len))
        len++;
    str=new char[len+1];
    for(int i=0; i<len; i++)
        *(str+i)=*s++;
    *(str+len)=NULL;
    length=maxlen=len;
}

String::String(int len)
{
    str=new char[len+1];
    *str=NULL;
    length=0;
    maxlen=len;
}

void String :: concat(int Newlen)
{
    char *tstr = new char[Newlen+1];
    int i=0;
    while(str[i])
        tstr[i]=str[i++];
    tstr[i]=NULL;
    delete [] str;
    str = tstr;
    maxlen = Newlen;
}

void String :: CCat(char *s)
{
    int len=0;
    while(*(s+len))
        len++;
    if((length+len)>=maxlen)
        concat(length+len);
    while(*s)
        str[length++]=*s++;
    str[length]=NULL;
}


void String :: CCat(String &o)
{
    if((length+o.Getlen()) >= maxlen)
        concat(length + o.Getlen());
    char *s = o.GetString();
    while(*s)
        str[length++]=*s++;
    str[length]=NULL;
}

void String::ShowString()
{
    if(length==0)
        cout<<endl<< "No string in this object."<<endl;
    else
    {
        cout<<endl<<str<<endl;
        cout<< "String Length: "<<length<<endl;
        cout<< "Maximum Capacity: "<<maxlen<<endl;
    }
}

char *String :: GetString()
{
    return str;
}
;
int String :: Getlen()
{
    return length;
}

String:: ~String()
{
    delete [] str;
}

int main()
{
    String a,b(30),c("Welcome to C++ in Bangla.");
    cout<< "\n In Object 'a' " ;
    a.ShowString();

    cout<< "\n In Object 'b' ";
    b.ShowString();

    cout<< "\n In Object 'c' ";
    c.ShowString();

    a.CCat("Hello");
    a.CCat("World");
    cout<< "\n In Object 'a' ";
    a.ShowString();

    b.CCat(a);
    cout<< "\n In Object 'b' ";
    b.ShowString();
    a.CCat(c);
    cout<< "\n In Object 'a' ";
    a.ShowString();

    cout<< "\n In Object 'c' " ;
    c.ShowString();
    b.CCat(a);
    cout<<"\n In Object 'b' ";
    b.ShowString();

    b.CCat("\n Good Luck...");
    cout<< "\n In Object 'b' ";
    b.ShowString();
}
