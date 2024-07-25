#include<string>
#include <iostream>
using namespace std;

class Double{
    double value;
    public:
    Double(){value=0;}
    Double(double v){
        value=v;
    }
    Double(Double &d){
        this->value=d.value;
    }
    Double operator+ (Double &d){
        Double temp;
        temp.value = this->value + d.value;
        cout<<temp.value;
        return temp;
    }
};



int main() {
    Double d1;
    Double d2(54.46);
    Double d3 = d1+d2;
    return 0;
}
