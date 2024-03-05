#include <iostream>
 
using namespace std;
   
int getGcd(int a, int b);
 
int main(){
    int num1, num2, gcd;
     
 cout << "Enter two numbers\n";
    cin >> num1 >> num2;
     
    gcd = getGcd(num1, num2);
 
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd;
 
    return 0;
}
/*
 * Function to calculate Greatest Common Divisor of two number
 */
 int getGcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return getGcd(b, a % b);
  }
}