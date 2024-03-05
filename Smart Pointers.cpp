#include<iostream>
#include<memory>
using namespace std;

class a
{
public:
	a()
	{
		cout<<"Constructor Called!"<<endl;
	}
	~a()
	{
		cout<<"Destructor Called"<<endl;
	}
};

int main()
{
//	unique_ptr<int>unPtr1 = make_unique<int>(25);
//	unique_ptr<int>unPtr2 = move(unPtr1);
//	cout<<*unPtr2<<endl;
	
	{
		unique_ptr<a>unPtr1 = make_unique<a>();
	} // destructor invokes at the end of the block
	
	shared_ptr<a>shptr = make_shared<a>();
	cout<<"Share count"<<shptr.use_count()<<endl;
	
	shared_ptr<a>shPtr2 = shptr;
	cout<<"Share count"<<shptr.use_count()<<endl;
	
	return 0;
}
