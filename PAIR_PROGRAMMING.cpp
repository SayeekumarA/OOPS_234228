#include <iostream>
using namespace std;
class programmer
{
	public:
		int a,b,c;
	int Grad()
	{
		cout<<"Enter your graduation score (if it lies) within range 60 and 99: ";
		cin>>a;
		if (a<60)
			cout<<"invalid"<<endl;
		return 0;
			
	}
	int PG()
	{
		cout<<"Enter your Post-graduation score (if it lies) within range 60 and 99: ";
		cin>>b;
		if (b<60)
			cout<<"invalid"<<endl;
		return 0;
		
	}
	void interview()
	{
		cout<<"Enter your Interview score within range 0 and 10: ";
		cin>>c;
	}
	void display()
	{
		cout<<"("<<a<<")G + ("<<b<<")P + ("<<c<<")I ."<<endl;
	}	
};

int pair_grad(programmer p1,programmer p2)
{
	int i;
	i= p1.a+p2.a;
	return i;
}
int pair_pg(programmer p1, programmer p2)
{
	int j;
	j=p1.b + p2.b;
	return j;
}
int pair_intview(programmer p1, programmer p2)
{
	int k;
	k=p1.c + p2.c;
	return k;
}

int main()
{
	programmer p1,p2;
	int x,y,z;
	p1.Grad();
	p1.PG();
	p1.interview();
	p1.display();
	
	p2.Grad();
	p2.PG();
	p2.interview();
	p2.display();
	
	x=pair_grad(p1,p2);
	y=pair_pg(p1,p2);
	z=pair_intview(p1,p2);
	if ((x > 150) & (y > 180) & (z > 9))
		cout<<"Valid!"<<endl;
	else
		cout<<"Invalid!"<<endl;
	
}
