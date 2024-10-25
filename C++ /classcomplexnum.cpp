#include <iostream>
using namespace std;

class Complex{
public:
    double real, imag;
    Complex(double r = 0, double i = 0){
        real = r;
        imag = i;
    }

    Complex add(Complex c2){
        Complex result;
        result.real = real + c2.real;
        result.imag = imag + c2.imag;
        return result;
    }

    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(2, 3), c2(4, 5);
    Complex sum = c1.add(c2);
    sum.print();
    return 0;
}
