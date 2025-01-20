#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class landmark //creation of class 
{
	public:
		string name;
		string place;
		// Member Function
		void set()
		{
			cout<<"Name of the Landmark: "; //cout is an object which prints stream of bits on the screen.
			cin>>name;
			cout<<"Place it is Located it: "; //cout is an object which prints stream of bits on the screen.
			cin>>place;
		}
		void display()
		{
			cout<<" "<<name<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"It is located in "<<place<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		}
	
};// closing of class
int main() //return type is of int.
{
	landmark l;
	l.set();
	l.display();
}
