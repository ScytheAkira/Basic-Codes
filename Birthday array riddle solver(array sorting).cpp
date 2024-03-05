#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
	int arr[5];
	srand(2);
	for(int i = 0; i<5 ; i++)
	{
		arr[i] = ((rand())%6);
		cout<<arr[i]<<endl;
	}
	
    return 0;
}

