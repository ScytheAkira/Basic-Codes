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
};
int main()
{
	YoutubeChannel yt;
	yt. name = "MKBHD";
	yt. OwnerName = "Marques Keith Brownlee";
	yt. Subscribers = 13000000;
	yt. PublishedVideoTitles = {"iPhone 13  Impressions", "Galaxy s22 Ultra Hands on", "Dear Samsung"};
	
	cout<<"The Channel Name is: "<<yt. name<<endl;
	cout<<"The name if the owner is: "<<yt. OwnerName<<endl;
	cout<<"Their Subscriber Count: "<<yt. Subscribers<<endl;
	cout<<"Some of their videos: "<<endl;
	for(string Titles: yt. PublishedVideoTitles)
	{
		cout<<Titles<<endl;
	}
	
	return 0;
}

