#include<iostream>
#include<string>
using namespace std;
typedef class MyCars
{
	char model[10], brand[15], price[10];
public:
	
	MyCars(char a[], char b[], char c[])
	{
		strcpy(model, a);
		strcpy(brand, b);
		strcpy(price, c);	
	}	
	void print()
	{
		cout<<"Brand: "<<brand<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Price: "<<price<<endl;
	}
}mc;

int main()
{
	mc Gaddi("Ghost","Rolls Royce","$ 250,000");
	Gaddi.print();
	return 0;
}
