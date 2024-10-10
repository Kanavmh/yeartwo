#include <iostream>
using namespace std;

class Factorial{
public:
    Factorial(int n) : number(n) {}
    int calculate() {
        int result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
private:
    int number;
};

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial factorial(num);
    cout << "Its factorial is " << factorial.calculate() << endl;
    return 0;
}
