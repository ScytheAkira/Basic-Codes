#include<iostream>

using namespace std;

int main()
{
	int a[2][2];
	int b[2][1];
	
	cout<<"Enter x element of the first equation: ";
	cin>>a[0][0];
	cout<<"Enter y element of the first equation: ";
	cin>>a[0][1];
	cout<<"What does the first equation equate to? : ";
	cin>>b[0][0];
	cout<<"The first equation is \n"<<a[0][0]<<"x + "<<a[0][1]<<"y = "<<b[0][0];

    return 0;
}

