#include<iostream>

using namespace std;
class C
{
	int a, b;
public:
	C()
	{
		cout<<"default constructor called!"<<endl;
		a = 0;
	}
	int changeval()
	{
		a = 3;
		b = 6;
		return b;
	}
	void givea()
	{
		cout << this->a << endl;
	}
		
};

int main()
{
	C obj;
	obj.changeval();
	obj.givea();
	return 0;
}
