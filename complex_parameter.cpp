#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class complex //creation of class
{
	public:
		int a,b;
		// Member Function
		void set(int x, int y)
		{
			/*cout<<"Enter real part: "; //cout is an object which prints stream of bits on the screen.
			cin>>a;
			cout<<"Enter imaginary part:"; //cout is an object which prints stream of bits on the screen.
			cin>>b;*/
			a=x;
			b=y;
			
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
	c1.set(3,4);
	c2.set(5,6);
	c1.display();
	c2.display();
	ans= add(c1,c2);
	ans.display();
}

