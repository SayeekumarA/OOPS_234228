#include <iostream>
using namespace std;
class test //creation of class
{
int a;
string str; 
int t;
int s;
public:
	void set()//member fns
	{
		cout<<"Enter S.No: ";
		cin>>a;
		cout<< "Enter Ocean Name:";
		cin >> str;
		cout << "No of Tsunamis:";
		cin >> t;
		cout << "No of Seas which are part of the ocean:";
		cin >> s;
	}
	void display()//member fns
	{
		cout<<"The Value of S.no: "<<a<<endl;
		cout<< "Ocean Name is:"<<str<<endl;
		cout << "No of Tsunamis:"<<t<<endl;
		cout << "No of Seas which are part of the ocean: "<< s;
	}
};// closing of class
int main()
{
	test t1;//creation of object... Memory is allocated here.
	t1.set();//calling set from class test 
	t1.display();//calling display from class test 
	return 0;
}

