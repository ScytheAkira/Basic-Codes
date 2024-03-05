#include<iostream>

using namespace std;

int main()
{
	int no_of_rows, no_of_cols;
	cout<<"Enter no_of_rows, no_of_cols:"<<endl;
	cin>>no_of_rows>>no_of_cols;
	
	int** table = new int* [no_of_rows];
	
	for(int i = 0 ; i < no_of_rows ; i++)
	{
		table[i] = new int [no_of_cols];
	}
	//table --> address of rows
	//*table --> rows values
	//**table --> columns values
	for(int i =0; i < no_of_rows ; i ++)
	{
		for(int j = 0; j < no_of_cols ; j++)
		{
			table[i][j]=0;
			
		}
	}
	table[1][2] = 88;
	for(int i =0; i < no_of_rows ; i ++)
	{
		for(int j = 0; j < no_of_cols ; j++)
		{
			cout<<table[i][j]<<"\t";
			
		}cout<<endl;
	}
	for(int i = 0 ; i < no_of_rows ; i++)
	{
		delete[] table[i]; // deletes each column array stored at the pointers of rows array
	}
	delete[] table;
	table = NULL;
	return 0;
}

