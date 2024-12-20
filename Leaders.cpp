#include <iostream>
using namespace std;
class Leaders
{
	public:
		string Name;
		string Birth_place;
		int years_lived;
	void set()
	{
		cout<<"Enter Name: ";
		cin>>Name;
		cout<<"Enter Birth place; ";
		cin>>Birth_place;
		cout<<"Years lived: ";
		cin>>years_lived;
	}
	void display()
	{
		cout<<"Name: "<<Name<<endl;
		cout<<"Birth place; "<<Birth_place<<endl;
		cout<<"Years lived: "<<years_lived<<endl;
	}
	
};
int main()
{
	Leaders a,b;
	a.set();
	b.set();
	a.display();
	b.display();
}
