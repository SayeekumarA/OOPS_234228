#include <iostream>
using namespace std; // This std has all the standard libraries of C++

class cars {
    string name;
    string colour;
    float price;
    int seating_capacity;
    float mileage;

public:
    // Member Function to input car details
    void set() 
	{
        cout << "Enter Company Name: ";
        cin >> name;
        cout << "Enter Model Name: ";
        cin >> colour;
        cout << "Enter Price:";
        cin >> price;
        cout << "Enter Seating Capacity: ";
        cin >> seating_capacity;
        cout << "Enter Mileage (in km/l): ";
        cin >> mileage;
    }

    void display() {
        cout << "Company: " << name << endl;
        cout << "Model: " << colour << endl;
        cout << "Price:" << price << endl;
        cout << "Seating Capacity: " << seating_capacity << " persons" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
    }
};

int main() {
    cars c1, c2, c3;

    // Take input from user for car details
    cout << "Enter details for Car 1:" << endl;
    c1.set();
    cout << "Enter details for Car 2:" << endl;
    c2.set();
    cout << "Enter details for Car 3:" << endl;
    c3.set();
    cout<<endl;
	cout << "Car 1 Details:" << endl;
    c1.display();
    cout<<endl;
    cout << "Car 2 Details:" << endl;
    c2.display();
    cout<<endl;
    cout << "Car 3 Details:" << endl;
    c3.display();
    
    return 0;
}
