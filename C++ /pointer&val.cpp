#include <iostream>
using namespace std;

int main(){
    int * a = new int;
    char * c = new char;
    float * f = new float;
    double * d= new double;
    long * l = new long;
    bool * b = new bool;
    
    cout<<a<<endl;
    cout<<c<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<l<<endl;
    cout<<b<<endl;
    
    cout<<*a<<endl;
    cout<<*c<<endl;
    cout<<*f<<endl;
    cout<<*d<<endl;
    cout<<*l<<endl;
    cout<<*b<<endl;
    
    cout<<sizeof(a)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(l)<<endl;
    cout<<sizeof(b)<<endl;
    
    delete a;
    delete c;
    delete f;
    delete d;
    delete l;
    delete b;
}
