#include<bits/stdc++.h>
using namespace std;
class sample
{
   int i;
   public:
   sample()
   {
      cout<<"Constructing....."<<endl;
   }
   void setl(int x){i=x;}
   int getl(){return i;}
   ~sample()
   {
      cout<<"Destructing....."<<endl;
   }
};
int main()
{
   sample *ptr;
   ptr=new sample[5];
   ptr->setl(10);
   (ptr+1)->setl(10);
   (ptr+2)->setl(10);
   (ptr+3)->setl(10);
   (ptr+4)->setl(10);
   cout<<"Value of i : "<<ptr->getl()<<endl;
   cout<<"Value of i : "<<(ptr+1)->getl()<<endl;
   cout<<"Value of i : "<<(ptr+2)->getl()<<endl;
   cout<<"Value of i : "<<(ptr+3)->getl()<<endl;
   cout<<"Value of i : "<<(ptr+4)->getl()<<endl;
   delete [] ptr;
   return 0;
}
