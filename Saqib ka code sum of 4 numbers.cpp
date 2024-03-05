#include <iostream>
using namespace std;

int main()
{    
    int a,b,c,d;
    float sum;
    float avg;
    cout << "Enter 1st number: "<<endl;
    cin >>a;
    cout << "Enter 2nd number: "<<endl;
    cin>>b;
    cout << "Enter 3rd number: "<<endl;
    cin >>c;
    cout << "Enter 4th number: "<<endl;
    cin>>d;
    sum=a+b+c+d;
    cout<<"sum is "<<sum<<endl;
    avg=sum/4;
    cout<<"average is"<<avg<<endl; 
    return 0;
}
