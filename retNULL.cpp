#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *ptr;
   ptr=new int [500000];
   if(ptr==NULL)
   {
      cout<<"Error: Memory allocation failed."<<endl;
      return (1);
   }
   *ptr=50;
   cout<<"First element is : "<<*ptr<<endl;
   return 0;
}
