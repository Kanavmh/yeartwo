// To Swap Two variables with and without a third variable using a call by value
#include <iostream>
using namespace std;
void swapWithTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping with temp: a = " << a << ", b = " << b << endl;
}
