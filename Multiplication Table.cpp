#include<iostream>

using namespace std;

int main()
{
	for(int i = 0; i<=10 ; i++)
	{
		cout<<"**********************************\n\n\n\nMultiplication Table of "<<i<<" : "<<endl;
		for(int j = 0; j <= 10 ; j++)
		{
			if(j<10)
				cout<<i<<" X "<<j<<" = "<<i*j<<endl;
			else if(j == 10)
				cout<<i<<" X "<<j<<" = "<<i*j<<"\n\n\n\n**********************************";

		}
	}

	return 0;
}

