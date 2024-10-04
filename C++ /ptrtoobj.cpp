#include <iostream>
using namespace std;

class MyClass {
public:
    int data;
    MyClass(int value) : data(value) {}
    void display() const {
        cout << "Data: " << data << endl;
    }
};
int main() {
    MyClass obj(42);
    MyClass* ptr = &obj;
    ptr->data = 100;
    ptr->display();
    MyClass* newObj = new MyClass(25);
    newObj->display();

    delete newObj;
    return 0;
}
