#include<iostream>

using namespace std;

int main()
{
	int year, month;
	cout<<"Enter Year: ";
	cin>>year;
	cout<<"Enter Month: ";
	cin>>month;
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"31 Days in a month. "; 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"30 Days in a month. ";
			break;
		case 2:
			(year % 4 == 0 && year % 100 != 0 || year % 400 ==0) ? // True if feb--> leap, turnary operator
			cout<<"29 days in a month. ": cout<< "28 days in a month. ";
			break;
		default:
			cout<<"Not valid;";
	}

	return 0;
}

