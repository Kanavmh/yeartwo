#include <iostream>
using namespace std;

int main(){
    int * a = new int;
    cout<<a<<endl;
    cout<<*a;
    delete a;
}
