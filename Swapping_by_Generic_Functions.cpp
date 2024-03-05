#include<iostream>
using namespace std;

template<typename T> /*This enables us to call any data type in function so that we dont have to code the same 
function again and again. We can use Class instead of typename too. We can also use any other variable name instead of T*/
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}//Will ONLY WORK IF function is declared right after template
//void Hack(T& a, T& b)
//{
//	a = a + 3;
//	b = b + 1;	
//}//Template only makes the function defined right after it a generic Function and leaves the rest
int main ()
{
	int a;
	int b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"BEFORE"<<endl<<" a = "<<a<<endl<<" b = "<<b<<endl;
	Swap (a, b);
//	Hack (a, b);
	cout<<"AFTER swap 1"<<endl<<" a = "<<a<<endl<<" b = "<<b<<endl;
	Swap <int>(a, b); // This replaces the T by int after the function is invoked/Called. Usually dont have to do this with already declared variables as it happens automatically
	
	cout<<"AFTER swap 2"<<endl<<" a = "<<a<<endl<<" b = "<<b;

	return 0;
}

