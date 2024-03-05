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
	int contentrate = 0;
public:
	YoutubeChannel(string n, string owner)
	{
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
	void CheckAnalytics()
	{
		( contentrate <= 5 ) ?
		cout<<"The content rate is bad"<<endl: cout<<"The content rate is good"<<endl;
	}
};
class VlogYtChannel : public YoutubeChannel
{
	public: /* Inherited classes are usually just the same class that includes different functions so we usually
	keep their data public as most of it are functions anyway*/
		VlogYtChannel (string pi, string pu): YoutubeChannel(pi, pu) //constructor, the parameters should be same in both
		{
			
		}
		void gear()// WE can add same member function with different details in different derived classes
		{
			cout<<OwnerName<<" has a Sony alpha a7iii, Shure sm-7, Manfrotto GorillaPod"<<endl;
			contentrate++;
		}
};
class TechYtChannel : public YoutubeChannel
{
	public: 
		TechYtChannel (string pi, string pu): YoutubeChannel(pi, pu) //constructor, the parameters should be same in both
		{
			
		}
		void gear() 
		{
			cout<<OwnerName<<" has an iPhone 13 pro, Mac Studio, Red Komodo"<<endl;
			contentrate++;
		}
};
int main()
{

//	YoutubeChannel yt("MKBHD", "Marques Brownlee");
	VlogYtChannel vlogyt ("Casey Neistat", "Casey"); //use of constructor
//	for(int i = 0 ; i < 10000000; i++)
//		vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Subscribe();
//	vlogyt.Unsubscribe();
//	vlogyt.Unsubscribe();
//	vlogyt.Unsubscribe();
//	vlogyt.AddTitle ("The thing about NYC");
//	vlogyt.PrintInfo();
	for(int i = 0; i < 2 ; i++)
		vlogyt.gear();
	TechYtChannel techyt ("MKBHD", "Marques");
//	for (int i = 0; i < 13000000 ; i++)
//		techyt.Subscribe();
//	techyt.AddTitle ("Apple Studio Display review");
	for(int i = 0 ; i < 6 ; i++)
		techyt.gear();
//	vlogyt.CheckAnalytics(); 
//	techyt.CheckAnalytics(); /* This method of calling the method will work just fine but we can also do something like */
	
	YoutubeChannel *p1 = &vlogyt; // You can make a pointer of data type of BASE class, that points to DERIVED class
	YoutubeChannel *p2 = &techyt;
	
	p1->CheckAnalytics(); //use this symbol when calling methods of a class type pointer
	p2->CheckAnalytics();
	return 0;
}
