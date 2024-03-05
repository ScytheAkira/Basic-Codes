#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
long long int fact(int num)
{
	long long int factorial=1;
	for(int i=1 ; i<=num ;i++){
		
		factorial *= i;    //this means and can be replaced by factorial = factoral * i;
	}
	
	return factorial;
}
int main()
{
	long double ans=0;

	double num;
	cin>>num;

	for(int i=0; i<=20; i++)
	{
		if( i==0 )
		{
			ans=1;
		}
		if (i>=1 && i<=20)
		{
			double p = pow(num,i);
			ans = ans + (p/fact(i));
		}
	}
	cout<<ans; 
    return 0;
}

