#include<iostream>
using namespace std;

void sayHi(string name,int age)
{
	cout<<"Hello "<<name<<". You are "<<age<<" years old!"<<endl;
}

int main()
{
	sayHi("Ikram",19);
	sayHi("Hassan",22);
	sayHi("Shani",25);
	return 0;
}
