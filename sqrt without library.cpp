#include<iostream>
#include<cmath>
using namespace std;

void squareroot(double num)
{
	double error = 0.00001; //define the precision of your result
    double s = num;

    while ((s - (num / s)) > error) //loop until precision satisfied 
    {
        s = (s + (num / s)) / 2;
    }
    cout<<s;
}
int main()
{
	double num;
	cin>>num;
	while(num < 0)
	{
		cout<<"invalid number, answer is undefined, please enter a non negative number"<<endl;
		cin>>num;
	}
	squareroot(num);
	return 0;
}

