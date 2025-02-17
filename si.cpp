//public inheritance: makes public members of the base class => public in the derived class, and the protected members of the base class => remain protected in the derived class.
// C++ program to explain  
// Single inheritance 
#include <iostream> 
using namespace std; 
// base class 
class Vehicle { 
  public: 
  //protected: //protected members are similar to as private members. 
  	//private:
    //Vehicle()
	void Vehicle1() //doesn't print cout statement. But the code runs. // if private leads to error as it cannot be accessed. 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// sub class derived from tho base classes 
class Car: public Vehicle //public inheritence (vehicle fn.) becomes a public member from the car class.
{ 
  
}; 
  
// main function 
int main() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    obj.Vehicle1();
    return 0; 
} 

