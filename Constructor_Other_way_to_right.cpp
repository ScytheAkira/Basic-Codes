#include<iostream>

using namespace std;

class oonga
{
	int a;
	
public:
	
	oonga(int a = 0)
	{
		cout<<"constructor called!";
		this->a = a;
	}	
	void print()
	{
		cout<<a<<endl;
	}
};
int main()
{
	oonga a;
	
	a = oonga(10);
	a.print();
	return 0;
}
