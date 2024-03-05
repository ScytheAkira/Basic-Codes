#include<iostream>
using namespace std;
int main(){
	int extra=0;
	
	cin>>extra;

	if (extra < 0){
		cout<< "small";
	}
	else if (extra == 0){
		cout<< "medium";
	}
	else{
		cout<< "large";
	}
	return 0;
}
