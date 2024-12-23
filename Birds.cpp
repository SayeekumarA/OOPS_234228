#include <iostream>
using namespace std;

class Birds {

public:
    char species[20];
    void can_fly(char b[10])
	{
        if (b == "penguin" || b =="ostrich") {
        	cout<<b<<" Does not Fly.\n";
        }
		else
		{
			
            cout<<b<<"It Flies.\n";
        }
    }


    void can_swim(char b[10])
	{
        if (b == "penguin") 
		{
            cout<<b<<"It swims.\n";
        }
		else {
            cout<<sp<<" Does not swim .\n";
        }
    } 
};

int main() 
{
    
    Bird a,b,c;

    
    a.can_fly("ostrich");
    a.can_swim("ostrich");
	
}
