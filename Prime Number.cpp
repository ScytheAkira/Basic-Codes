#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	while (num<0)
	{
		cout<<"Invalid Input, Please enter a valid number: ";
		cin>>num;
	}
	bool isPrime = 0;
	
	if (num == 2 || num == 3)
	{
		isPrime = 1;
	}
	if(num > 3)
	{
		for(int i = 2; i < num ; i++)
		{
			if (num%i == 0)
			{
				isPrime = 0;
				break;
			}
			else if (num%i != 0)
			{
				isPrime = 1;
			}
			
		}
	}
	if (isPrime)
	{
		cout<<"Prime Number";
	}
	else
		cout<<"Not Prime";
    return 0;
}

