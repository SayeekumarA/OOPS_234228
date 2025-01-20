#include <iostream>
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).

class Student //creation of class
{
    
	public:
		string name;
	    int semester;
	    int subjects;
	    float total_marks_scored;
		// Function to calculate average marks
	    void set(string name, int semster, int subjects, float total_marks_scored)//member fns
		{
			cout<<"Student Name: "; //cout is an object which prints stream of bits on the screen.
			cin>>name;
			cout<< "Semester:"; //cout is an object which prints stream of bits on the screen.
			cin >> semester;
			cout << "Number of Subjects: "; //cout is an object which prints stream of bits on the screen.
			cin >> subjects;
			cout << "Total marks Secured: "; //cout is an object which prints stream of bits on the screen.
			cin >> total_marks_scored;
		}
	
	    // Function to display student details
	    void display() 
		{
	        cout << "Student Name: " << name << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	        cout << "Semester: " << semester << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	        cout << "Number of Subjects: " << subjects << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	        cout << "Total Marks Secured: " << total_marks_scored << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	        cout << "Average Marks: " << Average() << endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	    }
	    float Average() 
		{
	        if (subjects == 0) 
			{
	            cout<< "Number of subjects cannot be zero."<<endl; //cout is an object which prints stream of bits on the screen. //endl is end line.
	            return 0.0; // Avoid division by zero
	        }
	        return (total_marks_scored / subjects);
	    }
    
}; // closing of class

int main()  //return type is of int.
{
    Student student1; // Create a Student object
    student1.name = "Sayeekumar";
    student1.semester= 2;
    student1.subjects=7;
    student1.total_marks_scored=450.0;
    student1.display(); // Display student details and average marks

    return 0;
}

