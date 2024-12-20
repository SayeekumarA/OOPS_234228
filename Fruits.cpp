#include <iostream>
using namespace std;
class fruits
{
	public:
		string fruit_name;
		string color;
		int quantity;
		float weight;
		float cost;
		void set()
		{
			cout<<"Name of the Fruit: ";
			cin>>fruit_name;
			cout<<"Color of the fruit: ";
			cin>>color;
			cout<<"Weight of the fruit (in g): ";
			cin>>weight;
			cout<<"Cost of 1kg: ";
			cin>>cost;
		}
		void display()
		{
			cout<<"Fruit Name: "<<fruit_name<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<"Weight (in g): "<<weight<<endl;
			cout<<"Cost (1 Kg): "<<cost<<endl;
		}
};
int main()
{
	fruits f, g, h;
	f.set();
	f.display();
	g.set();
	g.display();
	h.set();
	h.display();
	
}
