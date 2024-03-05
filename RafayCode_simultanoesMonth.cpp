#include<iostream>
using namespace std;


int main()
{
    int arr[5]={2,3,3,1,4};
    int day,month;
    int count=0;
    int sum=0,val=0;
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"Enter Month: ";
	cin>>month;
    for(int i=0;i<=5;i++)
    {
        if (sum==month && i==day){
            count++;
        }
        else if (i<day){
            sum+=arr[i];
        }
        else{
            day++;
            i=val++;
            sum=0;
            continue;
        }
    }
    cout<<"==>"<<count;
    return 0;
}
