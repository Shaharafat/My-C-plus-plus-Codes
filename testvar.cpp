#include<iostream>
using namespace std;
class testvar
{
	int i;
public:
	testvar(int i){
		testvar::i = i;
		cout<<i<<endl;
		}

};
int main()
{
	testvar t(10);

}
