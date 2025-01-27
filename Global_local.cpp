#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void display() 
{
    // Local variable
    int localVar = 5;
    
    cout << "Global variable: " << globalVar << endl;  // printing global variable
    cout << "Local variable: " << localVar << endl;    // printing local variable
}

int main() {
    cout << "In main function:" << endl;
    cout << "Global variable: " << globalVar << endl;  // printing global variable
    //cout << "Local variable: " << localVar << endl; // This will give an error 

    display();  // Call the function to demonstrate the local and global variables inside it

    // Modify the global variable
    globalVar = 20;
    cout << "After modifying the global variable." << endl;
    cout << "Global variable: " << globalVar << endl;  // Modified global variable
    return 0;
}

