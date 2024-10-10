// Swap Two Variables Using Third Vriable
#include<iostream>
using namespace std;
int main(){
	int a = 57;
	int b = 75;
	cout << "Initial value: a =  "<< a << " b = "<<b<<endl;
	int c ;
	c = a;
	a = b;
	b = c;
	cout << "Final Value: a = "<< a << " b = "<<b<<endl;
	return 0;
}
