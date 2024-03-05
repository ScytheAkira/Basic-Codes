#include<iostream>
using namespace std;


void g() 
{ 
 int x = 1;  
 cout << "Robot speaks 3 times."<<endl; 
 while (x <= 3) 
 { 
 // Sentence 1 
 cout << "Hello! I am a Robot."<<endl; 
 x = x + 1; 
 } 
 while (x <= 3) 
 { 
 // Sentence 2 
 cout << "Are you a human?"<<endl; 
 x = x + 1; 
 } 
} 

int main(){
	g();
	
	return 0;
}
