#include<iostream>

using namespace std;
class a
{
	
public:
	void oonga()
	{
		cout<<"oonga"<<endl;
	}
};
class b : public a
{
public:
	
	void boonga()
	{
		cout<<"boonga"<<endl;
	}
};
class c : public b
{
public:
	
	void toonga()
	{
		cout<<"toonga"<<endl;
	}
};

int main()
{
	b objb;
	objb.oonga();
	c obj;
	obj.oonga();
	return 0;
}
