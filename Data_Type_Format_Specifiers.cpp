#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i = 3;
    long l = 12345678912345;
    char c = 'a';
    float f = 334.23;
    double d = 14049.30493;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d", i);
    cout<<endl;
    printf("%ld", l);
    cout<<endl;
    printf("%c", c);
    cout<<endl;
    printf("%f", f);
    cout<<endl;
    printf("%lf", d);
    return 0;
}