//wap to order pizza
#include<iostream>
#include<string>
using namespace std;

class eat{
    public:
        int orderno;
        string toppings;
        string track;
    };

void details(eat z1);
void hello(eat z1);

int main(){
	eat n1;
	hello(n1);
	details(n1);
}

void details(eat z1){
    cout<<"Enter order number: ";
    cin>>z1.orderno;
    cout<<"Enter topping: ";
    cin>>z1.toppings;
}

void hello(eat z1){
    string track;
    cout<<"User: ";
    getline(cin,track);
	cout<<"Tracking "<<track<<", Enter details: "<<endl;
}

