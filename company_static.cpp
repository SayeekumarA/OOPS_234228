#include <iostream>
using namespace std;

class Company 
{
	public:
    	static float initial_amount; //static
    	float branch_A, branch_B,branch_C,branch;
    //void Company_amount()
    /*{
    	cout<<"Intial amount of the company: "<<endl;
		cin>>initial_amount;	
	}*/
	void Branch_amount()
	{
		cout<<"Branch A: "<<endl;
		cin>>branch_A;
		cout<<"Branch B: "<<endl;
		cin>>branch_B;
		cout<<"Branch C: "<<endl;
		cin>>branch_C;
	}
	float fund_allocated(float x)
	{
		branch=x;
		
	}
	float remaining_fund(float r)
	{
		initial_amount=initial_amount-branch;
		return initial_amount;
	}
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
float Company :: initial_amount=50;
int main() 
{
    Company comp;
    //comp.Company_amount(); // Initial capital in lakhs
    //cout<< "Initial capital the company possesses is: "<<comp.initial_amount<< " Lakhs"<<endl;
    comp.Branch_amount();

    // Display allocated funds
    comp.display();

    // Calculate and display the remaining capital
    float remaining_amount = comp.Remaining_amount();
    cout << "Remaining capital with Company X: Rs " << remaining_amount << " Lakhs" << endl;

    return 0;
}
