#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).

class Birds //creation of class 
{

public:
	// Member Function
    char species[20];
    void can_fly(string b)
	{
        if (b == "penguin" || b =="ostrich") 
		{
        	cout<<b<<" Does not Fly.\n"; //cout is an object which prints stream of bits on the screen.
        }
		else
		{
			
            cout<<b<<"It Flies.\n"; //cout is an object which prints stream of bits on the screen.
        }
    }


    void can_swim(string b)
	{
        if (b == "penguin") 
		{
            cout<<b<<"It swims.\n"; //cout is an object which prints stream of bits on the screen.
        }
		else 
		{
            cout<<b<<" Does not swim .\n"; //cout is an object which prints stream of bits on the screen.
        }
    } 
}; // closing of class

int main() //return type is of int.
{
    
    Birds a,b,c;

    
    a.can_fly("ostrich");
    a.can_swim("ostrich");
	
}
