#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int j,k=0,l;
    char a[100];
    gets(a);
    char t[200];
    l=strlen(a);
    for(j=l-1; j>=0; j--)
    {
      t[k]=a[j];
      k++;
    }
    t[k]='\0';
    printf("%s\n",t);
}
