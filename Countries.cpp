#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class Countries //creation of class
{
	public:
		string country;
		string capital;
		int population;
		float area;
		// Member Function
		void set()
		{
			cout<<"Enter Country: "; //cout is an object which prints stream of bits on the screen.
			cin>>country;
			cout<<"Enter Capital: "; //cout is an object which prints stream of bits on the screen.
			cin>>capital;
			cout<<"Population of the Country: "; //cout is an object which prints stream of bits on the screen.
			cin>>population;
			cout<<"Area covered by the Country: "; //cout is an object which prints stream of bits on the screen.
			cin>> area;
		}
		int max(int x, int y)
		{
			if (x>y)
				return(x);
			else
				return(y);
			
		}
		void display()
		{ 
			cout<<"Country: "<<country<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Capital: "<<capital<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Population of the Country: "<<population<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Area covered by the Country: "<<area<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
		}
	
}; // closing of class
int main() //return type is of int.
{
	Countries i, b, m;
	int a;
	i.set();
	i.display();
	b.set();
	b.display();
	a=m.max(i.population, b.population);
	cout<<"Max Population is "<<a; 
}
