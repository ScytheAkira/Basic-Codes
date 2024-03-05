#include<iostream>

using namespace std;

int FindPosition(int [], int, int);
int main()
{	
	int num, position = 0;
	int a[10] = {5, 8, 3, 12, 9, 12, 7, 2, 12, 8} ;
	cout<<"Enter the element you want to find in the array: ";
	cin>>num;
	position = FindPosition(a, 10, num);
	cout<<"position = "<<position;
    return 0;
}
int FindPosition (int arr[], int size, int input)
{
	int i;
	
	for (i=0; i<size ; i++)
	{
		if(input == arr[i])
		{
			return i;
		}
	}
	return -1;
}

