#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;


int main()
{
	//	without spaces
	
	char arr[10];
	//
	//cin >> setw(10) >> arr;
	//

	cin.getline( arr, 10);
	cin.ignore();
	cout<<"Enter a number:"<<endl;
	for(int i =0 ; i < 10 ; i++ )
	{
		cout<<arr<<endl;
	}

	return 0;
}
