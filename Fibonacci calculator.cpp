#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num;
	cin>>num;
	long long int fn;
	double g = (1 + sqrt(5)) / 2;
	double r = (1 - sqrt(5)) / 2;
	fn = ( ( pow (g, num)) - ( pow (r, num) ) ) / (sqrt(5)) ;
	cout<<"ANSWER = "<<fn;
	
    return 0;
}

