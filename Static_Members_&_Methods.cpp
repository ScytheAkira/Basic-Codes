#include<iostream>

using namespace std;
class cars
{
private:
	string name;
	static int a; //can't initialize here
public:
	static void GetCount()
	{
		cout<<"count = "<<a<<endl;
	}
	cars(string n)
	{
		name = n;
		cout<<"The name of the car is: "<<name<<endl;
		a++;
	}	
};
int cars:: a = 1; //initialize here -->0 initialized by default

int main()
{
	cars a("Toyota Corolla");
	cars::GetCount();
	cars b("Suzuki Swift");
	cars::GetCount();
	cars c("Hyundai Elantra");
	cars::GetCount();
	return 0;
}
