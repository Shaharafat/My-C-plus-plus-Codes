#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"How many element's ? : ";
   cin>>n;
   int *ptr =new int [n];
   for(int i=0;i<n;i++)
   *(ptr+i)=i+1;
   for(int i=0;i<n;i++)
   cout<<*(ptr+i)<<" ";
   return 0;
}
