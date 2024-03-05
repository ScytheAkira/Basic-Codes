#include<iostream>

using namespace std;

//void Primefact(int num)
int main()
{
	int num;
	cin>>num;
	int n=2;
	int k=1;
	int i;
		cout<<"The prime factors are: "<<endl;
	if (  num == 2)
	{
		cout<<2<<endl;
	}
	if (num == 3)
	{
		cout<<3<<endl;
	}
	if (num > 3)
	{	

		while (num%2 == 0)
		{
			cout<<2<<"\t";
			num/=2;
		}

		while (num%3 == 0)
		{
			cout<<3<<"\t";
			num/=3;
		}
		
		for(i=5;i<=num;i++) 
		{
			if (num%i == 0)
			{
				for (n=2 ; n<i ; n++)
				{
					if(i%n == 0)
					{
						k=0;
					}
				}
			
				if(k == 1)
				{
					cout<<i<<"\t";
				}
				num /= i;
			}
		
		}
	}
	return 0;	
}

