#include<iostream>

using namespace std;
class a
{
  int i;
 public: 
 	a()
 	{
 		i = 10;
	}
	void aPrint()
	{
		cout<<i<<endl;
	}
};
class b: public a
{
  int j;
 public: 
 	b()
 	{
 		j = 20;
	}
	void Print()
	{
		aPrint();
		cout<<j<<endl;
	}
};

int main()
{
	b objB;
	objB.Print();
	return 0;
}
