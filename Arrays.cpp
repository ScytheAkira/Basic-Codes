#include<iostream>
using namespace std;
int main()
{
//	int luckyNums[] = {4,7,9.13};
//	luckyNums[2]=5;
//	cout<<luckyNums[2];
	
	int l[3][2];
	for(int i = 0; i < 3 ;i++ )
	{
		for(int j = 0; j<2 ; j++)
		{
			cin>>l[i][j];
		}
	}
	for(int i = 0; i < 3 ;i++ )
	{
		for(int j = 0; j<2 ; j++)
		{
			cout<<l[i][j];
		}
		cout<<endl;
	}
	return 0;
}