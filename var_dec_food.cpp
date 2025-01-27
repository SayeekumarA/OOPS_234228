#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).

int main() //return type is of int.
{
	cout<<"Enter the fruit you want: "<<endl; //cout is an object which prints stream of bits on the screen.
	cout<<"Enter the number of kg(s) you want: "<<endl; //cout is an object which prints stream of bits on the screen.
	int kg;
	cin>>kg;
	cout<<"The cost of that specific fruit is: "<<endl; //cout is an object which prints stream of bits on the screen.
	double cost;
	cin>> cost;
	
	double total_cost= kg * cost; 
	
	cout<<"Total cost of purchase: "<<total_cost<<endl; //cout is an object which prints stream of bits on the screen.
	return 0;
	
}
