#include <iostream>
using namespace std;

class Student 
{
    
	public:
		string name;
	    int semester;
	    int subjects;
	    float total_marks_scored;
		// Function to calculate average marks
	    void set()//member fns
		{
			cout<<"Student Name: ";
			cin>>name;
			cout<< "Semester:";
			cin >> semester;
			cout << "Number of Subjects: ";
			cin >> subjects;
			cout << "Total marks Secured: ";
			cin >> total_marks_scored;
		}
	
	    // Function to display student details
	    void display() 
		{
	        cout << "Student Name: " << name << endl;
	        cout << "Semester: " << semester << endl;
	        cout << "Number of Subjects: " << subjects << endl;
	        cout << "Total Marks Secured: " << total_marks_scored << endl;
	        cout << "Average Marks: " << Average() << endl;
	    }
	    float Average() 
		{
	        if (subjects == 0) 
			{
	            cout<< "Number of subjects cannot be zero."<<endl;
	            return 0.0; // Avoid division by zero
	        }
	        return (total_marks_scored / subjects);
	    }
    
};

int main() 
{
    Student student1; // Create a Student object
    student1.name = "Sayeekumar";
    student1.semester= 2;
    student1.subjects=7;
    student1.total_marks_scored=450.0;
    student1.display(); // Display student details and average marks

    return 0;
}

