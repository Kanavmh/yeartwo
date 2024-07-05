//wap to create a class with roll no,name,phone number, location,
#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        int roll;
        string name;
        int phone;
        string location;
    };

void details(student n1);
void hello(student n1);
void pl(student n1);

int main(){
	student n1;
	hello(n1);
	details(n1);
	pl(n1);
}

void details(student n1){
    cout<<"Enter roll number: ";
    cin>>n1.roll;
    cout<<"Enter name: ";
    cin>>n1.name;
}

void pl(student n1){
    cout<<"Enter phone number: ";
    cin>>n1.phone;
    cout<<"Enter location: ";
    cin>>n1.location;
}

void hello(student n1){
    string name;
    cout<<"User: ";
    getline(cin,name);
	cout<<"Good morning "<<name<<", Enter details: "<<endl;
}
