/*Suppose we want to make 3 to 4 objects of the same Youtuber class, we would have to intialize the data members of each object
seperately and this will make our code repetative and unnecessarily long, so we have Constructors as integrated functions that are called
upon each time an object is created so that the user doesnt have to copy the same code again and again just to intialize the
data members of the object*/

//--> Constructors have the same name as the class name and have no data type


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
	void Setter(string na)
	{
		name = na;
	}
	string Getter()
	{
		return name;
	}
	YoutubeChannel()//constructor default
	{
		
	}
	YoutubeChannel(string n, string owner, int subs)//constructor parameterized
	{
		name = n;
		OwnerName = owner;
		Subscribers = subs;
	}
};
int main()
{
//	YoutubeChannel yt;
//	yt. name = "MKBHD";
//	yt. OwnerName = "Marques Keith Brownlee";
//	yt. Subscribers = 13000000;
//	yt. PublishedVideoTitles = {"iPhone 13  Impressions", "Galaxy s22 Ultra Hands on", "Dear Samsung"};
//	YoutubeChannel yt("MKBHD", "Marques Brownlee", 13000000);
	YoutubeChannel yt;
//	yt.PublishedVideoTitles.push_back("iPhone 13 Impressions");
//	yt.PublishedVideoTitles.push_back("Galaxy s22 Ultra Hands on");
//	yt.PublishedVideoTitles.push_back("Dear Samsung");
	
	
	
	yt.Setter("MKBHD");
	cout<<"The Channel Name is: "<<yt.Getter()<<endl;
	cout<<"The name if the owner is: "<<yt. OwnerName<<endl;
	cout<<"Their Subscriber Count: "<<yt. Subscribers<<endl;
	cout<<"Some of their videos: "<<endl;
	for(string Titles: yt. PublishedVideoTitles)
	{
		cout<<Titles<<endl;
	}
	
	
	return 0;
}

