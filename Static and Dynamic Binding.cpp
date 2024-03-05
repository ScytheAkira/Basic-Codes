#include<iostream>

//Static(compile time) Binding: --> call of a function associated with its definition at compile time, e.g when we call a function, function overloading, operator overloading
// Dynamic(run time) Binding: --> same process happening at run time, slower than static binding, e.g. virtual functions, function overriding

using namespace std;

float sumNumbers(float a, float b)
{
	return a + b;
}
float sumNumbers(float a, float b, float c)
{
	return a + b + c;
}
class User
{
public:
	virtual void getPermissions()
	{
		cout<<"Users can see limited info."<<endl;
	}
};
class SuperUser: public User
{
	void getPermissions()
	{
		cout<<"Super Users can see unlimited info."<<endl;
	}
};
int main()
{
//	cout<<sumNumbers(1,2)<<endl;
//	cout<<sumNumbers(1,2,3)<<endl; //function overloading, all the info available at compile time hence static binding used.
	
	User* u;
	
	SuperUser s;
	
	u = new SuperUser;
	
	u = &s;
	u->getPermissions(); //info provided at run time, hence, dynamic binding is used
	
	
	return 0;
}
