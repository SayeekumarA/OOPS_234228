//protected inheritance: makes the public and protected members of the base class => protected in the derived class.
// C++ program to implement  
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  protected:
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler: protected Vehicle //protected inheritance 
{  public: 
	//protected:
	//private:
    fourWheeler1() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
// sub class derived from the base classes 
class Car: protected /*public*/ fourWheeler
{ 
   public:
   //protected: 
     Car() 
     { 
       cout<<"Car has 4 Wheels"<<endl; 
     } 
}; 
  
// main function 
int main() 
{    
    //creating object of sub class will 
    //invoke the constructor of base classes 
    Car obj; 
    int a;
    return 0; 
    
} 

