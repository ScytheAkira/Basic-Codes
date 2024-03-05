#include<iostream>

using namespace std;

class base
{
	int a;
	int b;
public:
	base()
	{
		a = 0;
		b = 0;
		cout<<"default base constructor called!"<<endl;
	}
	void print()
	{
		cout<<"oonga"<<endl;
	}
};
class derived: public base
{
 	int c;
 public:
 	derived()
 	{
 		c = 100;
 		cout<<"Derived constructor called !"<<endl;
	}
	void print()
	{
		cout<<"boonga"<<endl;
	}
	
};
int main()
{
	derived b;
	b.print();
	return 0;
}
