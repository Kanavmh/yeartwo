#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimes(int limit) {
    cout << "Prime numbers up to " << limit << " are:" <<endl;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " "<<endl;
        }
    }
}

int main() {
    int limit;
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;

    printPrimes(limit);

    return 0;
}
