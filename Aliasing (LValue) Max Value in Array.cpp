#include<iostream>
//doesnt work rn

using namespace std;

int findMax(int arr[]);
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	const int & x = findMax(arr);
	cout<<x<<endl;
	return 0;
}
int findMax(int arr[])
{
	int max = arr[0];
	for( int & s : arr)
	{
		if (s>max)
		{
			max = s;
		}
	}
	return max;
}