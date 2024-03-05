#include<iostream>

using namespace std;
class numcheck
{
	int num;
public:
	numcheck( int i = 10)
	{
		num = i;
	}
	void print()
	{
		cout<<num<<endl;
		cout<<getter()<<endl;
	}
	void setter(int k)
	{
		num = k;
	}
	bool getter() const
	{
		if(num>0)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	numcheck n;
	n.print();
	n.setter(5);
	n.setter(10);
	n.print();
	return 0;
}
