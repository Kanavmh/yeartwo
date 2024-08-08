#include <iostream>
using namespace std;

int main(){
    int * a = new int;
    char * c = new char;
    float * f = new float;
    double * d= new double;
    long * l = new long;
    bool * b = new bool;
    
    cout<<"Integer Address: "<<a<<endl;
    cout<<"Character Address: "<<c<<endl;
    cout<<"Float Address: "<<f<<endl;
    cout<<"Double Address: "<<d<<endl;
    cout<<"Long int Address: "<<l<<endl;
    cout<<"Boolean Address: "<<b<<endl;
    
    cout<<"Integer Value: "<<*a<<endl;
    cout<<"Character Value: "<<*c<<endl;
    cout<<"Float Value: "<<*f<<endl;
    cout<<"Double Value: "<<*d<<endl;
    cout<<"Long int Value: "<<*l<<endl;
    cout<<"Boolean Value: "<<*b<<endl;
    
    cout<<"Size of Integer: "<<sizeof(a)<<endl;
    cout<<"Size of Character: "<<sizeof(c)<<endl;
    cout<<"Size of Float: "<<sizeof(f)<<endl;
    cout<<"Size of Double: "<<sizeof(d)<<endl;
    cout<<"Size of Long int: "<<sizeof(l)<<endl;
    cout<<"Size of Boolean: "<<sizeof(b)<<endl;
    
    delete a;
    delete c;
    delete f;
    delete d;
    delete l;
    delete b;
}
