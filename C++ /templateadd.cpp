#include <iostream>
using namespace std;

template <typename T>
class Add{
    public:
    T add(T a, T b);
};
template <typename T>
    T Add<T>::add(T a,T b){
    return a+b;
}
int main() {
    Add <int> intAdd;
    cout<<intAdd.add(5,10);
    
    return 0;
}
