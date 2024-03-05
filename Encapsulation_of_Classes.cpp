#include<iostream>
#include<list> //required for a list function
using namespace std;
class YoutubeChannel
{

private: //To make class data members accessible from outside class, we add this public access modifier
//To make class date members inaccessible from outside the class we add private access modifier
	string name;
	string OwnerName;
	int Subscribers = 0;
	list<string> PublishedVideoTitles; // creates a list automatically
	/*Classes have private data members by default which means they are only accessible withing the class and 
	can't be accessed by using Classname. member1 etc in the main function */
public://We can only access public data members and functions from outside the class 
/*so if we want to modify any private data members we have to use the public member functions that have access to those private
data members as these functions are defined within that class. So we are accessing private members indirectly via
the public members of that class.*/
	YoutubeChannel(string n, string owner)
	{
		name = n;
		OwnerName = owner;
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
int main()
{
//	YoutubeChannel yt;
//	yt. name = "MKBHD";
//	yt. OwnerName = "Marques Keith Brownlee";
//	yt. Subscribers = 13000000;
//	yt. PublishedVideoTitles = {"iPhone 13  Impressions", "Galaxy s22 Ultra Hands on", "Dear Samsung"};
	YoutubeChannel yt("MKBHD", "Marques Brownlee");
//	yt.PublishedVideoTitles.push_back("iPhone 13 Impressions");
//	yt.PublishedVideoTitles.push_back("Galaxy s22 Ultra Hands on");
//	yt.PublishedVideoTitles.push_back("Dear Samsung");
//	cout<<"The Channel Name is: "<<yt. name<<endl;
//	cout<<"The name if the owner is: "<<yt. OwnerName<<endl;
//	cout<<"Their Subscriber Count: "<<yt. Subscribers<<endl;
//	cout<<"Some of their videos: "<<endl;
//	for(string Titles: yt. PublishedVideoTitles)
//	{
//		cout<<Titles<<endl;
//	}
	yt.Subscribe();
	yt.Subscribe();
	yt.Subscribe();
	yt.Subscribe();
	yt.Unsubscribe();
	yt.Unsubscribe();
	yt.Unsubscribe();
	yt.AddTitle ("Mac Studio Review");
	yt.PrintInfo();
	return 0;
}
