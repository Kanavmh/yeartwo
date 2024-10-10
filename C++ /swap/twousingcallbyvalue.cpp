// To Swap Two variables with and without a third variable using a call by value
#include <iostream>
using namespace std;
void swapWithTemp(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping with temp: a = " << a << ", b = " << b << endl;
}
void swapWithoutTemp(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping without temp: a = " << a << ", b = " << b << endl;
}
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping: a = " << num1 << ", b = " << num2 << endl;
    swapWithTemp(num1, num2);
    swapWithoutTemp(num1, num2);
    cout << "In main after swapping: a = " << num1 << ", b = " << num2 << endl;
    return 0;
}
