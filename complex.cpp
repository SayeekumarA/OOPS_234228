#include <iostream>
using namespace std;
class complex
{
	public:
		int a,b;
		void set()
		{
			cout<<"Enter real part: ";
			cin>>a;
			cout<<"Enter imaginary part:";
			cin>>b;
			
		}
		void display()
		{
			cout<<"The complex number is: "<<a<<"+"<<b<<"i\n";
			
		}
};
complex add(complex a, complex b)
{
	complex ans;
	ans.a= a.a+b.a;
	ans.b=a.b+b.b;
	return(ans);
	
}
int main()
{
	complex c1,c2,ans;
	c1.set();
	c2.set();
	c1.display();
	c2.display();
	ans= add(c1,c2).display();
	ans.display();
}

