#include <iostream>
using namespace std;

class Company {
public:
    float initial_amount;
    float branch_A, branch_B,branch_C;

    float Remaining_amount() 
	{
        float total = branch_A + branch_B + branch_C;
        return (initial_amount - total);
    }

    // Function to display allocated funds for each sub-branch
    void display() 
	{
        cout << "Funds allocated to Sub-branch A: Rs " << branch_A << " Lakhs" <<endl;
        cout << "Funds allocated to Sub-branch B: Rs " << branch_B << " Lakhs" <<endl;
        cout << "Funds allocated to Sub-branch C: Rs " << branch_C << " Lakhs" <<endl;
    }
};

int main() {
    Company comp;
    comp.initial_amount = 50.0; // Initial capital in lakhs
    cout<< "Initial capital the company possesses is: "<<comp.initial_amount<< " Lakhs"<<endl;
    comp.branch_A= 15.0;
    comp.branch_B = 14.0;
    comp.branch_C = 9.0;

    // Display allocated funds
    comp.display();

    // Calculate and display the remaining capital
    float remaining_amount = comp.Remaining_amount();
    cout << "Remaining capital with Company X: Rs " << remaining_amount << " Lakhs" << endl;

    return 0;
}
