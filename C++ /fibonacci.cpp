//wap to implement dynamic problem
#include <iostream>
#include <string>
using namespace std;

int fibo(int n){ //fibonacci printing
    if (n <= 1){
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n;
    cin>>n;
    int result = fibo(n);
    cout << result << endl;

    return 0;
}
