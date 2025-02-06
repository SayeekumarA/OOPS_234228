#include <iostream>
using namespace std;
class X 
{
private:
    int i,j;
public:
      X() //default constructor
	  {
          i=0;
          j=0;
      }
      X(int a,int b) //parameterized constructors. constructors with different number of parameters is called constructor overloading. 
	  {
	      i=a;
	      j=b;
	}
  void display()
  {
      cout<<"The number is"<<i<<"+i"<<j<<endl;  
  }
  ~X() //destructor. //ar to constructor. it doesn't return anything. doesn't take any parameters.
  {
      cout<<"Destrcutor is called"<<endl;
  }
 
};

int main() 
{
  X x1; //default constructor is called.
  X x2(2,3); //parameterized constructor is called. 
  x1.display();
  x2.display();
  return 0;   
}
/*How overloading is known?*/
//every constructor is ended with a destructor. just like new and delete in dynamic memory allocation .

