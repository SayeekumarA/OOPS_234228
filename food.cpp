#include <iostream>
using namespace std;
class food
{
	public:
		string food_item;
		int quantity;
		float cost;
		string taste;
		void set()
		{
			cout<<"Enter the food item: ";
			cin>>food_item;
			cout<<"Quantity: ";
			cin>>quantity;
			cout<<"Type of Taste: ";
			cin>> taste;
			cout<<"Cost: ";
			cin>> cost;
		}
		void display()
		{
			cout<<"Food Item: "<<food_item<<endl;
			cout<<"Quantity: "<<quantity<<endl;
			cout<<"Type of Taste: "<<taste<<endl;
			cout<<"Cost of the food item is "<<cost<<" Rs"<<endl;
			
		}
		float total()
		{
			float total_cst;
			total_cst= (quantity * cost);
			return(total_cst);
			
		}
};
int main()
{
	food f;
	food g;
	float fd;
	f.set();
	g.set();
	f.display();
	g.display();
	cout<<"Total bill is: "<<f.total();
	cout<<"Total bill is: "<<g.total();
	
	
}
