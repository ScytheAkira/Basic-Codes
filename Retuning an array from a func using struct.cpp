// C++ Program to Demonstrating returning of a local
// array from a function using Struct
#include <iostream>
using namespace std;

struct arrWrap {
	int arr[100];
};

arrWrap fun()
{
	arrWrap x;

	x.arr[0] = 10;
	x.arr[1] = 20;

	return x;
}

int main()
{
	arrWrap x = fun();
	cout << x.arr[0] << " " << x.arr[1];
	return 0;
}
