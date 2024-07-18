#include <iostream>
#include <string>
using namespace std;
class Y;
class X{
    private:
    int num1;
    public:
    X(){
        num1=4;
    }
    friend void add(X,Y);
};

class Y{
    private:
    int num2;
    public:
    Y(){
        num2=20;
    }
    friend void add(X,Y);
};

void add(X x,Y y){
    int sum= x.num1+y.num2;
    cout<<"sum: "<<sum;
}

int main() {
    X x1;
    Y y1;
    add(x1,y1);
    return 0;
}
