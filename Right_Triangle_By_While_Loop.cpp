#include<iostream>

using namespace std;

int main()
{
	int i = 0, j = 0;
	while(i < 5)
	{
		j = 0;
		while (j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	 } 

	return 0;
}

