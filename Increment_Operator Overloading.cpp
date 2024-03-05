#include<iostream>

using namespace std;
class Weight
{
private:
	int kg;
public:
	Weight()
	{
		kg=0;	
	}	
	weight(int x)
	{
		kg = x;
	}
	void Print()
	{
		cout<<"weight in kg: "<<kg<<endl;
	}
//	void operator ++()
//	{
//		++kg;
//	}
//	void operator ++(int) // takes in the data type of variable to be incremented
//	{
//		kg++;
//	}
//	void operator --()
//	{
//		--kg;
//	}
//	void operator --(int) 
//	{
//		kg--;
//	}
	Weight operator ++()
	{
		Weight temp;
		temp.kg = ++kg;
		return temp;
	}
	Weight operator ++(int) // takes in the data type of variable to be incremented
	{
		Weight temp;
		temp.kg = kg++;
		return temp;
	}
	Weight operator --()
	{
		Weight temp;
		temp.kg = --kg;
		return temp;
	}
	Weight operator --(int) 
	{
		Weight temp;
		temp.kg = kg--;
		return temp;
	}
};

int main()
{
//	int x = 0;
//	++x;
//	cout<<x<<endl;
	Weight obj;
	++obj;
	obj.Print();
	obj++;
	obj.Print();
	--obj;
	obj.Print();
	obj--;
	obj.Print();
	
	
	Weight obj1, obj2;
	
	obj2 = ++obj1; //cant do this with void type operator overloading because cant assign void values to weight objects
	obj1.Print();
	obj2.Print();
	return 0;
}
