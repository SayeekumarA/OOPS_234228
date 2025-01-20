#include <iostream>
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).

class cars //creation of class
{
    string name;
    string colour;
    float price;
    int seating_capacity;
    float mileage;

public:
    // Member Function to input car details
    void set() //member fns
	{
        cout << "Enter Company Name: "; //cout is an object which prints stream of bits on the screen.
        cin >> name;
        cout << "Enter Model Name: "; //cout is an object which prints stream of bits on the screen.
        cin >> colour;
        cout << "Enter Price:"; //cout is an object which prints stream of bits on the screen.
        cin >> price;
        cout << "Enter Seating Capacity: "; //cout is an object which prints stream of bits on the screen.
        cin >> seating_capacity;
        cout << "Enter Mileage (in km/l): "; //cout is an object which prints stream of bits on the screen.
        cin >> mileage;
    }

    void display() //member fns
	{
        cout << "Company: " << name << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
        cout << "Model: " << colour << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
        cout << "Price:" << price << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
        cout << "Seating Capacity: " << seating_capacity << " persons" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
        cout << "Mileage: " << mileage << " km/l" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    }
}; // closing of class

int main() //return type is of int.
{
    cars c1, c2, c3;

    // Take input from user for car details
    cout << "Enter details for Car 1:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c1.set();
    cout << "Enter details for Car 2:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c2.set();
    cout << "Enter details for Car 3:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c3.set();
    cout<<endl;
	cout << "Car 1 Details:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c1.display();
    cout<<endl;
    cout << "Car 2 Details:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c2.display();
    cout<<endl;
    cout << "Car 3 Details:" << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
    c3.display();
    
    return 0;
}
