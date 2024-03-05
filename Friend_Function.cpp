#include<iostream>

using namespace std;

typedef class EquilateralTriangle
{
private:
	float a;
	float circumference;
	float area;
public:
	void SetLen(float length)
	{
		a = length;
		circumference = a*3;
		area = (1.73 * a * a) / 4;
		
	}
//	friend void PrintResult(EquilateralTriangle obj);
	friend class Homework;
}et;

class Homework
{
public:
	void PrintResult(et obj)
	{
		cout<<"circumference = " << obj.circumference << endl;
		cout<<"Area = "<< obj.area << endl;
	}
};
//void PrintResult(et obj)
//{
//	cout<<"circumference = " << obj.circumference << endl;
//	cout<<"Area = "<< obj.area << endl;
//}
int main()
{
	et e;
	e.SetLen(3);
//	PrintResult(e);
	Homework hw;
	hw.PrintResult(e);
    return 0;
}
