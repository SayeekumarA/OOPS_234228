#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class food //creation of class
{
	public:
		float a,b;
		string food_item;
		int quantity;
		float cost;
		string taste;
		// Member Function
		void set()
		{
			cout<<"Enter the food item: "; //cout is an object which prints stream of bits on the screen.
			cin>>food_item;
			cout<<"Quantity: "; //cout is an object which prints stream of bits on the screen.
			cin>>quantity;
			cout<<"Type of Taste: "; //cout is an object which prints stream of bits on the screen.
			cin>> taste;
			cout<<"Cost: "; //cout is an object which prints stream of bits on the screen.
			cin>> cost;
		}
		void display()
		{
			cout<<"Food Item: "<<food_item<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Quantity: "<<quantity<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Type of Taste: "<<taste<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			cout<<"Cost of the food item is "<<cost<<" Rs"<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
			
		}
		float total()
		{
			float total_cst;
			total_cst= (quantity * cost);
			return(total_cst);
			
		}
}; // closing of class

float max(float x, float y)
{
	float a=x;
	float b=y;
	if (a>b)
		return(a);
	else
		return(b);
}

int main() //return type is of int.
{
	food f;
	food g;
	food tl;
	float fd;
	f.set();
	g.set();
	f.display();
	g.display();
	cout<<"Total bill of "<<f.food_item<<" is "<<f.total()<<endl; //cout is an object which prints stream of bits on the screen.
	cout<<"Total bill of "<<g.food_item<<" is "<<g.total()<<endl; //cout is an object which prints stream of bits on the screen.
	cout<<"The maximum amount is: "<< max(f.total(), g.total())<<endl;
	
}
