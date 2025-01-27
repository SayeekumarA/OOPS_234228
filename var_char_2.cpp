#include <iostream>
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int main()
{
	int n=100;
	int *p= &n;
	int &m= *p; //m is bound to n 
	//variable m becomes alias of n.
	cout << "n= " << n << " m= " << m << " *p= " << *p << " &m= " << &m << " p= " << p << " &n= " << &n <<endl; //cout is an object which prints stream of bits on the screen.
	int k= 5;
	p= &k; //pointer value is changed.
	k= 200; // is there change in m value? nope.
	cout << "n= " << n << " m= " << m << " *p= " << *p << " &m= " << &m << " p= " << p <<endl; //cout is an object which prints stream of bits on the screen.
	cout << " &k= " << &k <<endl; //cout is an object which prints stream of bits on the screen.

}
