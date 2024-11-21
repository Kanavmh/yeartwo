// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    
    int Area(){
        return length*breadth;
    }
};

int main() {
    int a;
    int b;
    cin>>a>>b;
    
    Rectangle rect(a,b);
    cout<<rect.Area()<<endl;
    return 0;
}
