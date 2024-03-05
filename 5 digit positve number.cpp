#include<iostream>
using namespace std;
int main(){
	int num=0;
	cout<<"Enter num: ";
	cin>>num;
	
	if(num >= 10000 && num <= 99999){
		cout<<"it is a five digit number";
	}else{
		cout<<"it is not a five digit number";
	}
	return 0;
}
