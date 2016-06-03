#include<bits/stdc++.h>
using namespace std;
class listelement
{
   private:
   int i;
   public:
   void setvalue(int x){i=x;}
   int getvalue(){return i;}
   listelement *nextelement;
};
int main()
{
   listelement le1,le2;
   le1.setvalue(50);
   cout<<"Value in le1 : "<<le1.getvalue()<<endl;
   le2.setvalue(100);
   cout<<"Value in le1 : "<<le2.getvalue()<<endl;
   le1.nextelement=&le2;
   cout<<"Value in le2 : "<<(le1.nextelement)->getvalue()<<endl;
   return 0;
}
