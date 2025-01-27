#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int main()
{

int a=1, b=2, c=3;
int &z= a; //variable z becomes alias of a.
cout<< "a="<< a <<" b=" << b << " c=" << c << " z=" << z << endl; //cout is an object which prints stream of bits on the screen.
z=b; //changes the value of a to the value of b
cout<< "a="<< a <<" b=" << b << " c=" << c << " z=" << z << endl; //cout is an object which prints stream of bits on the screen.
z=c; //changes the value of a to the value of c
cout<< "a="<< a <<" b=" << b << " c=" << c << " z=" << z << endl; //cout is an object which prints stream of bits on the screen.
cout << "&a=" << &a << " &b=" << &b << " &c=" << &c << " &z=" <<&z<< endl; //cout is an object which prints stream of bits on the screen.
}

