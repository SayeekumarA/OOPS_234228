#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class fruits //creation of class
{
	public:
		string fruit_name;
		string color;
		int quantity;
		float weight;
		float cost;
		// Member Function
		void set()
		{
			cout<<"Name of the Fruit: "; //cout is an object which prints stream of bits on the screen.
			cin>>fruit_name;
			cout<<"Color of the fruit: "; //cout is an object which prints stream of bits on the screen.
			cin>>color;
			cout<<"Weight of the fruit (in g): "; //cout is an object which prints stream of bits on the screen.
			cin>>weight;
			cout<<"Cost of 1kg: "; //cout is an object which prints stream of bits on the screen.
			cin>>cost;
		}
		void display()
		{
			cout<<"Fruit Name: "<<fruit_name<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Color: "<<color<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Weight (in g): "<<weight<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Cost (1 Kg): "<<cost<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		}
}; // closing of class
int main() //return type is of int.
{
	fruits f, g, h;
	f.set();
	f.display();
	g.set();
	g.display();
	h.set();
	h.display();
	
}
