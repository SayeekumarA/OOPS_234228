#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class Leaders //creation of class
{
	public:
		string Name;
		string Birth_place;
		int years_lived;
	// Member Function
	void set()
	{
		cout<<"Enter Name: "; //cout is an object which prints stream of bits on the screen.
		cin>>Name;
		cout<<"Enter Birth place; "; //cout is an object which prints stream of bits on the screen.
		cin>>Birth_place;
		cout<<"Years lived: "; //cout is an object which prints stream of bits on the screen.
		cin>>years_lived;
	}
	void display()
	{
		cout<<"Name: "<<Name<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		cout<<"Birth place; "<<Birth_place<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		cout<<"Years lived: "<<years_lived<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	}
	
}; // closing of class
int main() //return type is of int.
{
	Leaders a,b;
	a.set();
	b.set();
	a.display();
	b.display();
}
