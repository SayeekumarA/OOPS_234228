// C++ program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr; 
	//ptr points to memory location of that block.
    
    // memory allocation of num number of floats
    ptr = new float[num]; //new is an operator for allocating memory required for float. Memory allocation is done at run time. 
    
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) 
	{
    cout << "Student" << i + 1 << ": "; //cout is an object which prints stream of bits on the screen.
    cin >> *(ptr + i);
    }
    
    cout << "Displaying GPA of students." << endl; //cout is an object which prints stream of bits on the screen.
    for (int i = 0; i < num; ++i) 
	{
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;   // ptr memory is released
    //cout is an object which prints stream of bits on the screen.
    }
    
   
    delete[] ptr; //delete, array [] var_name;
    ptr = nullptr;
    cout << ptr << endl; //cout is an object which prints stream of bits on the screen.
    return 0;
}
