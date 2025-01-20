#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class test //creation of class
{
int a;
string str; 
int t;
int s;
public:
	void set() //member fns
	{
		cout<<"Enter S.No: "; //cout is an object which prints stream of bits on the screen.
		cin>>a;
		cout<< "Enter Ocean Name:"; //cout is an object which prints stream of bits on the screen.
		cin >> str;
		cout << "No of Tsunamis:"; //cout is an object which prints stream of bits on the screen.
		cin >> t;
		cout << "No of Seas which are part of the ocean:"; //cout is an object which prints stream of bits on the screen.
		cin >> s;
	}
	void display()//member fns
	{
		cout<<"The Value of S.no: "<<a<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		cout<< "Ocean Name is:"<<str<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		cout << "No of Tsunamis:"<<t<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		cout << "No of Seas which are part of the ocean: "<< s; //cout is an object which prints stream of bits on the screen.
	}
};// closing of class
	
int main() //return type is of int.
{
	test t1;//creation of object... Memory is allocated here.
	t1.set();//calling set from class test 
	t1.display();//calling display from class test 
	return 0;//returning zero
}

