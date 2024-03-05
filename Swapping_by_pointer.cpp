#include<iostream>
using namespace std;

void Swap(int* a, int* b);

int main ()
{
	int a;
	int b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"BEFORE"<<endl<<" a = "<<a<<endl<<" b = "<<b<<endl;
	Swap (&a, &b);
	cout<<"AFTER"<<endl<<" a = "<<a<<endl<<" b = "<<b;
	return 0;
}
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
