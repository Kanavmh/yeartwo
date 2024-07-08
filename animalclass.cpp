//wap for animals and functions
#include <iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Animal eats"<<endl;
    }
    void sleep(){
        cout<<"Animal sleeps"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"Dog barks"<<endl;
        }
    };
int main() {
    dog mydog;
    mydog.bark();
    return 0;   
}
