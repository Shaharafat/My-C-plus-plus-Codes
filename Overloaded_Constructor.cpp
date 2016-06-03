#include<bits/stdc++.h>
using namespace std;
enum acc_type
{
	CURRENT=1,SAVINGS=2,FIXED=3
};

class acc
{
private:
	int acc_id;
	char name[25];
	acc_type type;
public:
	acc();
	acc(int id,char *name,int t);
	acc(ifstream &fin);
	void display(void);
	~acc(){};
};

acc::acc()
{
	int type;
	cout << endl << "Enter Account ID: #";
	cin >> acc_id;
	cout <<endl << "Enter the name of Account Holder :";
	cin>>name;
	cout << endl << "Enter Account Type (CURRENT=1,SAVINGS=2,FIXED=3): ";
	cin >> type;
	acc::type = (acc_type) type;
}

acc :: acc(int id,char *name,int t)
{
	acc_id=id;
	strcpy(acc::name,name);
	acc::type = (acc_type) t;
}

acc::acc(ifstream& fin)
{
	fin.open("C:\\Users\\Md. Shah Arafat\\overloaded.txt",ios::in);
	if (!fin)
	{
		cout<<endl<<"File Error : File Not Found...." << endl;
		cout<<endl<<"So,No record is created,object is empty or garbage...";
		return;
	}
	fin>>acc_id;
	fin>>name;
	int type;
	fin>>type;
	acc::type = (acc_type) type;
}

void acc::display()
{
	static int out_no=1;
	cout<<endl<<"Output#"<<out_no++;
	char *type_name[] = {"","CURRENT","SAVINGS","FIXED"};
	cout<<endl<<"Account id#"<<acc_id<<endl;
	cout<<"Name        : "<<name<<endl;
	cout<<"Account type: "<<type_name[type]<<endl;
}

int main()
{
	ifstream fin;
	acc a1,a2(2,"Niton",2),a3(fin);
	a1.display();
	a2.display();
	a3.display();
}
