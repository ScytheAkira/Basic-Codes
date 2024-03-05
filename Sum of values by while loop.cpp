#include<iostream>

using namespace std;
//Using while loop
int main()
{
	int n;
	cout<<"Enter the total number of values you want to find the average of: " ;
	cin>>n;
	int i = 0;
	double sum = 0; // so that when we enter the first value its sum = 0 + value = value
	int m = n-1;
	while (i<n)
	{
		int val;
		cout<<"Enter the value number "<<n-(m) <<": "<<endl;
		m--;
		cin>>val;
		sum = sum + val;
		i++; //this is incrementation by 1 value and can also be written as i = i + 1
	}
	
	double avg = sum/n ;
	cout<<"The sum of values is = "<<sum<<endl;
	cout<<"The average of values is "<<avg<<endl;  //or you can uncomment the 21st line if you wanna use avg instead of sum/n

    return 0;
}

