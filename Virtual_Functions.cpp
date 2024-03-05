#include<iostream>

using namespace std;
class instrument
{
public:
	virtual void print()
	{
		cout<<"Instrument Playing..........."<<endl;
	}
		
};

class trumpet: public instrument
{
public:
	void print()
	{
		cout<<"Trumpet Playing............"<<endl;
	}
};
class violin: public instrument
{
public:
	void print()
	{
		cout<<"Violin Playing............"<<endl;
	}
};
int main()
{
	instrument* i1 = new trumpet;
//	i1->print();
	instrument* i2 = new violin;
//	i2->print();
	
	instrument* arr[2] = {i1, i2};
	for(int i = 0; i<2 ; i++)
	{
		arr[i]->print();	
	}
	return 0;
	
}
	