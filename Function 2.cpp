#include<iostream>
using namespace std;

void sayHi(string name,int age);

int main()
{	
	sayHi("Ikram",19);
	sayHi("Ehsan",25);
	sayHi("Inam",27);
	return 0;
}

void sayHi(string name,int age)
{ cout<<"Hello Mr. "<<name<<" You are "<<age<<"years old."<<endl;
}

