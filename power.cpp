#include <iostream>
using namespace std;
class power
{
	public:
		float u,f,b;
		void set()
		{
			cout<<"Enter total units: ";
			cin>>u;
		}
		float initial()
		{
			f=0.5 * 100;
			u= u-100;
			cout<<u<<endl;
			return f;
		}
		float beyond()
		{
			cout<<"beyond u: "<<u<<endl;
			if (u>300)
				b=0.6 * u;
				cout<<"b: "<<b<<endl;
				return b;
		}
		void display()
		{
			cout<<"Initial amount is: "<<f<<endl;
			cout<<"Beyond amount is: "<<b<<endl;
		}
};
int main()
{
	power p;
	p.set();
	float x,y,sum, difference;
	x=p.initial();
	y=p.beyond();
	p.display();
	sum=x+y; 
	difference= sum-250.0;
	if (sum>250.0)
		sum=sum+ (0.15*difference);
	cout<<"total amount: "<<sum<<endl;

}
