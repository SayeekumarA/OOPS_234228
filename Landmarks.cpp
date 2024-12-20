#include <iostream>
using namespace std;
class landmark
{
	public:
		string name;
		string place;
		
		void set()
		{
			cout<<"Name of the Landmark: ";
			cin>>name;
			cout<<"Place it is Located it: ";
			cin>>place;
		}
		void display()
		{
			cout<<" "<<name<<endl;
			cout<<"It is located in "<<place<<endl;
		}
	
};
int main()
{
	landmark l;
	l.set();
	l.display();
}
