#include<iostream>
using namespace std;

int main ()
{
	bool isMale = false;
	bool isTall = false;
	
	if (isMale && isTall){
	
		cout<<"You are a tall male.";
    }
//we can also put (isMale && !isTall) below 
	else if (isMale){
 	
		cout<<"You are a short male.";
	}
//Similarly we can also put (isTalll && !isMale) or (!isMale && isTall) below
	else if (isTall){
		
		cout<<"You are a tall female.";
	}

	else {
		
		cout<<"You are a short female.";
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

