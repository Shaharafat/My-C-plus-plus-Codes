#include<bits/stdc++.h>
using namespace std;
class X
{
    int length,width;
public:
	X(){length=width=0;}
	X(int i,int j)
	{
		length=i;
		width=j;
	}

	friend X operator + (X x,int y);

	void show(){
		cout<< "length : "<<length<<endl<<"width : "<<width<<endl<<endl;
	}
};

X operator + (X x,int y){
	X temp;
	temp.length=x.length+y;
	temp.width=x.width+y;
	return temp;
}

int main(int argc, char const *argv[])
{
	X a(100,150),a1;
	a1.show();
	a.show();
	a1=a+25;
	a1.show();
	return 0;
}
