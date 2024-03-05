#include<iostream>
#include<string>
using namespace std;
class Printer
{
	string name;
	int _availablePaper;
public:
	Printer(string n, int paper)
	{
		name = n;
		_availablePaper = paper;
	}
	void Print(string txtDoc)
    {
		int requiredPaper = txtDoc.length() / 10;
		if (requiredPaper > _availablePaper)
		{
//			throw "No paper";
			throw 420;
		}
		cout<<"printing...."<<txtDoc<<endl;
		_availablePaper -= requiredPaper;
	}
};

int main()
{
	try
	{
		Printer myPrinter("HP Deskjet2000", 10);
		myPrinter.Print("Hello My name is Ikram, Oonga Boonga");
		myPrinter.Print("Hello My name is Ikram, Oonga Boonga");
		myPrinter.Print("Hello My name is Ikram, Oonga Boonga");
		myPrinter.Print("Hello My name is Ikram, Oonga Boonga");
		myPrinter.Print("Hello My name is Ikram, Oonga Boonga");	
	}
	catch(const char* txtException)
	{
		cout<<"Exception: "<<txtException<<endl;
	}
	catch(int ExceptionCode)
	{
		cout<<"Exception: "<<ExceptionCode<<endl;
	}
	catch(...)
	{
		cout<<"Exception!! "<<endl;
	}
	return 0;
}
