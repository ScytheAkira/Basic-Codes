#include<iostream>
using namespace std; 
int main() {
	int num=0 , denom=0, common=0,i=1;
	 cout<<"Enter numenator and denomenator"<<endl;
	 cin>> num >> denom;
		if (num <= 0 || denom <= 0){
			cout << "Not possible ";
		}else{
			while (i<=num && i<=denom){
				if (num % i==0 && denom % i==0)
					common = i;
					i = i+1;
				
		}
	num /= common;
	denom /= common;
	cout << num << "/" << denom;
	}
	return 0; 
}
