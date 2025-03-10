#include <iostream> //method overwriting
using namespace std;
class A //this class has a fn declrd but not defined. hence A is an abstract class. any class where atleast one mem fn is declrd but not defnd. 
{
	public:
		
		void display1();//declaring in parent and defining in the child class.
		/*{
			cout<<"I belong to Parent Class"<<endl;
		} *///this must be overridden by the child class.
};

class B: public A 
{
	public:
		void display2()
		//void display1() //this member fn overwrties the display 1 of the parent class.
		{
			cout<<"I belong to a Child Class"<<endl;	
		}	
};

int main()
{
	B b1;
	//b1.display1(); //over writing.
	b1.display2(); 
	return 0;
}

