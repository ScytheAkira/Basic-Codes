#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height, width;
	char symbol;
	
	cout<<"Enter Height: ";
	cin>>height;
	cout<<"Enter Width: ";
	cin>>width;
	cout<<"Enter Symbol: ";
	cin>>symbol;
	
	for(int h = 0; h < height ; h++)
	{
		for(int w = 0; w < width ; w++)
		{
			cout<<setw(3)<<symbol;
		}
		cout<<endl;
	}
	return 0;
}

