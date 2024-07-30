#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        int roll;
        string name;
    };

void details(student n1);
void hello(student n1);

int main(){
	student n1;
	hello(n1);
	details(n1);
}

void details(student n1){
    cout<<"Enter roll number: ";
    cin>>n1.roll;
    cout<<"Enter name: ";
    cin>>n1.name;
}

void hello(student n1){
    string name;
    cout<<"User: ";
    getline(cin,name);
	cout<<"Good morning "<<name<<", Enter details: "<<endl;
}



