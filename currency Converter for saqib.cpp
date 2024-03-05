#include<iostream>

using namespace std;

int main()
{
	char crncy, conv;
	double AUD, CAD, EGP, PKR, MXN, num;
	cout<<"AUD --> a\tMXN -- b"<<endl;
	cout<<"CAD --> c\tPKR -- d"<<endl;
	cout<<"EGP --> e"<<endl;
	cout<<"Select the currency which you have from the above table : "<<endl;
	cin>>crncy;
	//INPUT VALIDATION-->
	int curr = static_cast<int>(crncy);
	cout<<curr;
	while ( curr < 65 || curr > 69 && curr < 97 || curr> 101) //ASCII values of a,b,c,d,e and A,B,C,D,E
	{
		cout<<"Please select a valid input from the table above: "<<endl;
		cin>>crncy;
	}
//	//CONVERSION -->
//	if (crncy == 'a')
//	{
//		cout<<"Enter the amount of AUD you want to convert: "<<endl;
//		cin>>num;
//		MXN = 14.89*num;
//		CAD = 0.92*num;
//		EGP = 11.34*num;
//		PKR = 128.71*num;
//		cout<<"CAD --> a\tMXN -- b"<<endl;
//		cout<<"EGP --> c\tPKR -- d"<<endl;
//		cout<<"Select the currency you want to converrt AUD to from above table: ";
//		cin>>conv;
//		while ( crncy < 65 || crcny > 68 || crncy <97 || crncy> 100) //ASCII values of a,b,c,d, and A,B,C,D,
//			{
//				cout<<"Please select a valid input from the table above: "<<endl;
//				cin>>crncy;
//			}
//		
//	}

    return 0;
}

