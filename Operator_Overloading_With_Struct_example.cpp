#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YoutubeChannel
{
	string name;
	int Subscribers;
	YoutubeChannel(string n, int sub)
	{
		name = n;
		Subscribers = sub;
	}
	bool operator==(const YoutubeChannel& obj)  //needs to be constant to be compared otheriwise wont work as values can be tempered in the function
	{
		return this->name == obj.name;
	}
};
struct MyCollection
{
	list<YoutubeChannel>myChannels;
	void operator +=(YoutubeChannel& obj)
	{
		this->myChannels.push_back(obj);
	}
	void operator -=(YoutubeChannel& obj)
	{
		this->myChannels.remove(obj);  //would not work by itself as it compares two values by == operator which has to overloaded first
	}
};
/*void operator<<(ostream& c, YoutubeChannel& obj)
{
	c<<"Name: "<<obj.name<<endl;
	c<<"Subscriber: "<<obj.Subscribers<<endl;
}*/ //This only works when cout<<a; and doesnt when cout<<a<<b;
ostream& operator<<(ostream& c, YoutubeChannel& obj)
{
	c<<obj.name<<endl;
	c<<obj.Subscribers<<endl;
	return c;
}
ostream& operator<<(ostream& c, MyCollection obj)
{
	for(YoutubeChannel m: obj.myChannels )
	{
		c<<m<<endl;
	}
	return c;
}
int main()
{
	YoutubeChannel yt1= YoutubeChannel("MKBHD",3000000);
//	cout<<yt1.name<<endl<<yt1.Subscribers<<endl;
	YoutubeChannel yt2 = YoutubeChannel("MrBeast",4000000);
//	cout<<yt1<<yt2;
//	operator<<(cout,yt1);
	MyCollection mc;
	mc += yt1;
	mc += yt2;
//	for(YoutubeChannel m: mc.myChannels )
//	{
//		cout<<m<<endl;
//	}
	cout<<mc;
	mc -= yt2;
    return 0;
}
