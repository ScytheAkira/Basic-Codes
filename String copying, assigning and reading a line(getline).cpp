#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1("hamster");
	string s2, s3;
	char s4[10];
	s2 = s1;
	s3.assign(s1);
	
	cout<<"s2 = "<<s2<<endl<<"s3 = "<<s3<<endl;
	int n,i;
	cout<<"Enter number"<<endl;
	cin>>i;
	cin.ignore();
	cout<<"Enter a phrase or a word: ";
//	getline(cin, s4);
	cin.get(s4, 10); // cin.getline(s4,10) is better because cin.get doesn't append null character at the end.
	cin.ignore();
	cout<<"enter a number ";
	cin>>n;
	cout<<"n = "<<n<<endl;
	for(int i = 0; i < 10 ; i++)
		cout<<" s4 = "<<s4[i]<<endl;
    return 0;
}

