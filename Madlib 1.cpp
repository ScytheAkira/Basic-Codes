#include<iostream>

using namespace std;

int main()
{
	string colour, plural, celeb;
	
	cout<<"Enter a name of a colour: ";
	getline(cin, colour);
	cout<<"Enter a plural noun: ";
	getline(cin, plural);
	cout<<"Enter a name of a celebrity: ";
	getline(cin, celeb);
	
	cout<<"Roses are "<<colour<<endl;
	cout<<plural<<" are blue"<<endl;
	cout<<"I love "<<celeb<<endl;
    return 0;
}

