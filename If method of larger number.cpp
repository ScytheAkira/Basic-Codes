#include<iostream>
using namespace std;

int getMax(int num1,int num2){
	int result;
	if(num1>num2)
	   result = num1;

	else
	   result = num2;
}

int main(){
	int num1,num2; //you can also use x and y
	cout<<"Enter the two numbers \n";
	cin>>num1;
	cin>>num2;
	
	cout<<getMax(num1,num2)<<" is the larger number.";
	
	return 0;
}
