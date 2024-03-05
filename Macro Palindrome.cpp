#include<iostream>

using namespace std;

int main()
{
	int num, b1, b2;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"\nEnter Base 1: ";
	cin>>b1;
	cout<<"\nEnter Base 2: ";
	cin>>b2;
	
	while(b1>16 || b1<2 )
	{
		cout<<"Enter a base 1 from 2 to 16";
		cin>>b1;
	}
	while(b2>16 || b2<2 )
	{
		cout<<"Enter a base 2 from 2 to 16";
		cin>>b2;
	}
	
	int n1 = b1, n2 =  b2;
	int m1=num, m2=num , sum1 = 0, sum2 = 0;
	
	for(int i = 0 ; i < 10 && m1>=1; i++)
	{
		sum1 = sum1 + (m1 % b1);
		if(m1>b1)
		sum1 = sum1 * 10;
		m1 = m1/b1;

	}
	for(int i = 0 ; i < 10 && m2>=1; i++)
	{
		sum2 = sum2 + (m2 % b2);
		if(m2>b2)
		sum2 = sum2 * 10;
		m2 = m2/b2;

	}
	int mus1= 0, mus2 = 0 , s1= sum1, s2= sum2;
	while(s1 != 0)
	{
		mus1 = (mus1 * 10) + (s1%10);
		s1 = s1 / 10;
	}
	while(s2 != 0)
	{
		mus2 = (mus2 * 10) + (s2%10);
		s2 = s2 / 10;
	}
	
	cout<<"Sum 1: "<<sum1<<endl;
	cout<<"Sum 2: "<<sum2<<endl;
	cout<<"Mus 1: "<<mus1<<endl;
	cout<<"Mus 2: "<<mus2<<endl;
	
	int k = 0, j = 0;
	if(mus1 == sum1)
	{
		k = 1;
		cout<<"Base 1 is Palindrome"<<endl;
	}
	else
	{
		cout<<"Base 1 is not a Palindrome"<<endl;
	}
	if(mus2 == sum2)
	{
		j = 1;
		cout<<"Base 2 is Palindrome"<<endl;
	}
	else
	{
		cout<<"Base 2 is not a Palindrome"<<endl;
	}
	if ((k == 1) && (j == 1))
	{
		cout<<"Number "<<num<<" is a Macro Palindrome. "<<endl;
	}
	else 
	{
		cout<<"Number "<<num<<" is not a Macro Palindrome. "<<endl;
	}

    return 0;
}

