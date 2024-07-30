#include <iostream>
#include <string>
using namespace std;

class A{  // base class
    public:
    void print(){
        cout<<"Class A";
    }
};
class B: virtual public A{ }; //derived class A
class C: virtual public A{ }; //derived class A
class D: virtual public B, virtual public C{ }; //derived class B, multilevel inheritance and multiple inheritance with B and C as parents

int main() {
    D object;
    object.print();
    return 0;
}
