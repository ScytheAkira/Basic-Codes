#include<iostream>

using namespace std;

void Fun(int [], int p);

int main()
{
	int a[5] = {0};
	Fun(a, 5);
	for (int i = 0; i<5 ; i++)
		cout<<a[i]<<endl;
	return 0;
}

void Fun(int arr[], int p)
{
	arr[1] += p;
}