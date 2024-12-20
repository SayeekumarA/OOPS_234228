#include <iostream>
using namespace std;
class Countries
{
	public:
		string country;
		string capital;
		int population;
		float area;
		void set()
		{
			cout<<"Enter Country: ";
			cin>>country;
			cout<<"Enter Capital: ";
			cin>>capital;
			cout<<"Population of the Country: ";
			cin>>population;
			cout<<"Area covered by the Country: ";
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
			cout<<"Country: "<<country<<endl;
			cout<<"Capital: "<<capital<<endl;
			cout<<"Population of the Country: "<<population<<endl;
			cout<<"Area covered by the Country: "<<area<<endl;
		}
	
};
int main()
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
