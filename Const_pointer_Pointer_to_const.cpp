#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int* const ptr = &a; //constant pointer, points to a specified address which cannot be changed
    cout << *ptr << endl;
    *ptr = *ptr + 20;
    cout << *ptr << endl;//the value of the variable at the address can be changed, but not the address itself
    //ptr = &b; //wrong
    //const int* p = &b;
    const int* p = &b; //pointer to constant, can point to another address but the value which is being pointed is constant
    cout << *p << endl;
    p = &a;
    cout << *p << endl;
    //*p = *p + 22; // would not work
	const int* const pt = &a; //a constant pointer pointing to a constant variable, neither the pointer can point to another variable nor the variable can be changed

    return 0;
}
