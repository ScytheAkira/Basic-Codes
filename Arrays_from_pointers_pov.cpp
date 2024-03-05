#include<iostream>

using namespace std;

int main()
{
	int luckynumbers[5];
//	cout << luckynumbers << endl;
//	cout<< &luckynumbers[0] << endl;
//	cout<< luckynumbers[2] << endl;
//	cout<< *(luckynumbers + 2) << endl;
	cout<<"Enter the values of array: "<<endl;
	for(int i = 0; i < 5 ; i++)
	{
		cin>> luckynumbers[i];
	}
	for(int i = 0; i < 5 ; i++)
	{
		cout<< *(luckynumbers + i) <<"\t";
	}
	return 0;
}

