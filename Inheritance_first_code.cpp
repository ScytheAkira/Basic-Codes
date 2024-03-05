#include<iostream>
#include<list> 
using namespace std;
class YoutubeChannel
{

private: 
	string name;
	int Subscribers = 0;
	list<string> PublishedVideoTitles; 
protected: //Data members in this category are available to inherited/derived classes
	string OwnerName;
public:
	YoutubeChannel(string n, string owner)
	{
		cout<<"base constructor called!"<<endl;
		name = n;
		OwnerName = owner;
	}
	void PrintInfo() 
	{
		cout<<"The Channel Name is: "<<name<<endl;
		cout<<"The name if the owner is: "<<OwnerName<<endl;
		cout<<"Their Subscriber Count: "<<Subscribers<<endl;
		cout<<"Some of their videos: "<<endl;
		for(string Titles:PublishedVideoTitles)
		{
			cout<<Titles<<endl;
		}

	}	
	void Subscribe()
	{
		Subscribers++;
	}
	void Unsubscribe()
	{
		if (Subscribers > 0)
			Subscribers--;
	}
	void AddTitle(string title)
	{
		PublishedVideoTitles.push_back(title);
	}
};
class VlogYtChannel : public YoutubeChannel
{
	public: /* Inherited classes are usually just the same class that includes different functions so we usually
	keep their data public as most of it are functions anyway*/
		VlogYtChannel (string pi, string pu): YoutubeChannel(pi, pu) //constructor, the parameters should be same in both
		{
			
		}
		void gear()
		{
			cout<<OwnerName<<" has a Sony alpha a7iii, Shure sm-7, Manfrotto GorillaPod"<<endl;
		}
};
int main()
{

//	YoutubeChannel yt("MKBHD", "Marques Brownlee");
	VlogYtChannel vlogyt ("Casey Neistat", "Casey"); //use of constructor
	for(int i = 0 ; i < 10000000; i++)
		vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Unsubscribe();
//	vlogyt.Unsubscribe();
//	vlogyt.Unsubscribe();
	vlogyt.AddTitle ("The thing about NYC");
	vlogyt.PrintInfo();
	vlogyt.gear();
	return 0;
}
