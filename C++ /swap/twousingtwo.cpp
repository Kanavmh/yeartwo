// Swap Two Variables Using Two Variables
#include<iostream>
using namespace std;
int main(){
	int a = 57;
	int b = 75;
	cout << "Initial value: a =  "<< a << " b = "<<b<<endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Final Value: a = "<< a << " b = "<<b<<endl;
	return 0;
}
