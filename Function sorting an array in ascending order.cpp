#include<iostream>

using namespace std;
void Ascender(int, int[]);
int main()
{
	int size;
	int a[200];
	cout<<"Enter the size: ";
	cin>>size;
	int i;
	cout<<"Enter the elements of array: "<<endl;
	for (i = 0; i<size ; i++)
	{
		cin>>a[i];
	}
	Ascender(size,a);
//	for (i = 0; i<size ; i++)
//	{
//		cout<<a[i]<<endl;
//	}
	

    return 0;
}
void Ascender(int size, int arr[])
{
	int max = arr[0];
	for(int j=1; j<size ; j++)
	{
		if(max <= arr[j])
		{
			cout<<m
		}
	}
	
}
