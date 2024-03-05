#include<iostream>

using namespace std;
int GetMin(int num[], int size)
{
	int min = num[0];
	for(int i = 1; i < size ; i++)
	{
		if(num[i] < min)
			min = num[i];
	}
	return min;
}
int GetMax(int num[], int size)
{
	int max = num[0];
	for(int i = 1; i < size ; i++)
	{
		if(num[i] > max)
			max = num[i];
	}
	return max;
}
int main()
{
	int numbers[5] = {4, 4 , 79, -2, 0};
//	cout<< "Min is: "<< GetMin(numbers, 5)<<endl;
//	cout<< "Max is: "<< GetMax(numbers, 5)<<endl;
	for (int i = 0; i < 5-1 ; i++)
	{
		for(int j = i+1 ; j < 5; j++)
		{
			if(numbers[j]<numbers[i])
			{
				int temp = numbers[i];
				numbers[i]= numbers[j];
				numbers[j] = temp;
			}
		}
	}
	for(int i = 0; i < 5 ; i++)
	{
		cout<<numbers[i]<<" , ";
	}cout<<endl;
    

	return 0;
}

