#include <iostream>
using namespace std;

int main(){
    int * a = new int;
    char * c = new char;
    float * f = new float;
    double * d= new double;
    long * l = new long;
    
    cout<<a<<endl;
    cout<<c<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<l<<endl;
    
    cout<<*a;
    cout<<*c;
    cout<<*f;
    cout<<*d;
    cout<<*l;
    
    cout<<sizeof(a);
    cout<<sizeof(c);
    cout<<sizeof(f);
    cout<<sizeof(d);
    cout<<sizeof(l);
    
    delete a;
    delete c;
    delete f;
    delete d;
    delete l;
}
