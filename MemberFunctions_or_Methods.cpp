#include<iostream>
#include<list> //required for a list function
using namespace std;
class YoutubeChannel
{

public: //To make my class data members accessible from outside class, we add this public access modifier
	string name;
	string OwnerName;
	int Subscribers;
	list<string> PublishedVideoTitles; // creates a list automatically
	/*Classes have private data members by default which means they are only accessible withing the class and 
	can't be accessed by using Classname. member1 etc in the main function */
	YoutubeChannel(string n, string owner, int subs)
	{
		name = n;
		OwnerName = owner;
		Subscribers = subs;
	}
	void PrintInfo() /* Just as we did with constructors to get eid of repetitive initialization of data members, we use class methods
	or member functions to get rid of other repetative tasks that we need for each class, in this case it is printing of info about 
	youtube channel*/
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
};
int main()
{
//	YoutubeChannel yt;
//	yt. name = "MKBHD";
//	yt. OwnerName = "Marques Keith Brownlee";
//	yt. Subscribers = 13000000;
//	yt. PublishedVideoTitles = {"iPhone 13  Impressions", "Galaxy s22 Ultra Hands on", "Dear Samsung"};
	YoutubeChannel yt("MKBHD", "Marques Brownlee", 13000000);
	yt.PublishedVideoTitles.push_back("iPhone 13 Impressions");
	yt.PublishedVideoTitles.push_back("Galaxy s22 Ultra Hands on");
	yt.PublishedVideoTitles.push_back("Dear Samsung");
//	cout<<"The Channel Name is: "<<yt. name<<endl;
//	cout<<"The name if the owner is: "<<yt. OwnerName<<endl;
//	cout<<"Their Subscriber Count: "<<yt. Subscribers<<endl;
//	cout<<"Some of their videos: "<<endl;
//	for(string Titles: yt. PublishedVideoTitles)
//	{
//		cout<<Titles<<endl;
//	}
	yt.PrintInfo();
	return 0;
}
