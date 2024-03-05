#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	int x = a;
	int y = b;
	int n = 2;
	int lcm= 1;
	int gcd = 1;
	while ( (n<=a) && (n<=b))
	{
		while( (x%n == 0) && (y%n == 0))
		{
			x = x/n;
			y = y/n;
			gcd *= n;
		}
		n++;
	}
	cout<<"GCD = "<<gcd<<endl;
	lcm = gcd*x*y ;
	cout<<"LCM = "<<lcm;
    return 0;
}

