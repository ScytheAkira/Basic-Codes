#include<iostream>
using namespace std;

int main(){
	int n, a=+2, b=-5 ,count;
	cout<<"Enter n: ";
	cin>>n;
	count=0;
	while (count<n){
		cout<<"+"<<a;
		count++;
		a=a+2;
	  if(count<n){
	  
		cout<<b;
		count++;
		
		b=b-5;
	}
	
	}
	return 0;
}
