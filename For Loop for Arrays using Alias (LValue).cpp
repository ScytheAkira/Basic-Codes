#include<iostream>

using namespace std;


int main()
{

	int arr[5] = {1, 2, 3, 4, 5};
	
	for(auto & x: arr)  //auto data type automatically detects
	{
		++x;
	}
	for(auto & x: arr) //	for(int i = 0 ; i<5 ; i++)
	{
		cout<<x<<endl;
	}
	return 0;
}
