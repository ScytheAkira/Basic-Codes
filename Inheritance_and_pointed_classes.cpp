#include<iostream>

using namespace std;
class A
{
public:	
	A()
	{
		cout<<"in A"<<endl;
	}
	virtual ~A()
	{
		cout<<"A destructor"<<endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout<<"in B"<<endl;
	}
	virtual ~B()
	{
		cout<<"B destructor"<<endl; //isn't used as the base class destructor is called only.
	}
};

class C : public A
{
public:
	C()
	{
		cout<<"in C"<<endl;
	}
	virtual ~C()
	{
		cout<<"C destructor"<<endl; //--> isn't used as the base class destructor is called only.
	}
};
int main()
{

	A *ptr[3];
	ptr[0] = new C;
	ptr[1] = new B;
	ptr[2] = new A;
	
	delete ptr[0];
	delete ptr[1];
	delete ptr[2];
	return 0;
}
