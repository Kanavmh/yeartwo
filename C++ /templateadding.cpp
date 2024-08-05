#include <iostream>
using namespace std;

template <typename T>
class Add{
    public:
    T add(T a, T b){
        return a + b;};
};
int main() {
    Add <int> obj1;
    cout<<obj1.add(4,5);
    return 0;
}
