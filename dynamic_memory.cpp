#include <iostream>
using namespace std;

int main() {

    // dynamically allocate memory
    int* point_int = new int{45};//memory leaks and dangling pointers
    float* point_float = new float{45.45f};//new is an operator for allocating memory required for integer. Memory allocation is done at run time. 
	//point_int points to memory location of that block.

    cout << *point_int << endl; //cout is an object which prints stream of bits on the screen.
    cout << *point_float << endl; //cout is an object which prints stream of bits on the screen.

    // deallocate the memory
    // set pointers to nullptr
    delete point_int;

    delete point_float;
    cout << *point_int << endl; //cout is an object which prints stream of bits on the screen.
    cout << *point_float << endl; //cout is an object which prints stream of bits on the screen.
    
    return 0;
}
//editor
//linker
//loader

