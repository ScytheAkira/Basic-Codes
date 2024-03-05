#include<iostream>
using namespace std;

int main(){
	double num, exp, x, ans;
	int count;
	cout<<"Enter base: ";
	cin>> num;
	cout<<"Enter exponent: ";
	cin>> exp;
	
	if (exp >= 0)
	{
		x=exp;  //we are using x as  variable so in case exp is negative, we can still write count<x
	}else if (exp < 0)
	{
		x= -exp;  //here exp is neg so if we had used count<exp it would have not shown us any result in that case hence we used x
	}
	ans = 1; //always  declare value of ans=1 wrna glt value btaye ga
	count = 1; //agr count 0 krna to neechy while k sth count<x krna not count <= x
	while (count <= x)
	{
		ans = ans*num;
		count++;
	}
	 if (exp < 0)
	 {
		cout<<"Answer= "<< 1/ans ;
	 }else if(exp >= 0)
	 {
		cout<<"Answer= "<<ans;
	 }
//	 else 
//	   cout<<"Answer= 1";
//	
	
	
	
	 return 0;
	
}

