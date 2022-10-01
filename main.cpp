#include "rational.h"
using namespace std;

int main(){
    Rational test(-10, -12), test2(8, 0);
    cout << test << test2;
    cout << (test >= test2) << endl;
    cout << test << test2;
    cin >> test;
    cout << (double)test << endl;
    return 0;
}