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
    cout<<obj1.add(4,5)<<endl;

    Add <string> obj2;
    cout<<obj2.add("Abc","sad")<<endl;
    return 0;
}
