//wap to swap two variables

#include<iostream>
using namespace std;

int main(){
	int a, b, temp;
	cout<<"Enter both numbers: ";
	cin>>a>>b;
	temp = a;
    a = b;
    b = temp;
	cout<<"Values of a and b: "<<endl<<a<<b;
	return 0;
	}
	
