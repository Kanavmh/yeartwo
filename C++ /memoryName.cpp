#include <iostream>
#include <cstring>
using namespace std;

class Memory{
    private:
    char* a;
    
    public:
    Memory(char* n){
        a = new char[strlen(n)+1];
        strcpy(a,n);
    }
    void display() const{
        cout<<"Person's name is: "<<a<<endl;
    }
    
    ~Memory(){
        delete[] a;
    }
    
};

int main() {
    char input[101];
    cin>>input;
    Memory obj(input);
    obj.display();
    
    
    return 0;
}
