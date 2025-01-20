#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class complex //creation of class
{
	public:
		int a,b;
		// Member Function
		void set()
		{
			cout<<"Enter real part: "; //cout is an object which prints stream of bits on the screen.
			cin>>a;
			cout<<"Enter imaginary part:"; //cout is an object which prints stream of bits on the screen.
			cin>>b;
			
		}
		void display()
		{
			cout<<"The complex number is: "<<a<<"+"<<b<<"i\n"; //cout is an object which prints stream of bits on the screen.
			
		}
}; // closing of class
complex add(complex a, complex b)
{
	complex ans;
	ans.a= a.a+b.a;
	ans.b=a.b+b.b;
	return(ans);
	
}
int main() //return type is of int.
{
	complex c1,c2,ans;
	c1.set();
	c2.set();
	c1.display();
	c2.display();
	ans= add(c1,c2).display();
	ans.display();
}

