#include<iostream>
using namespace std;
class Point{
	int a, b;
	public:
			Point(){
				cout << "Default constant called" << endl ;
				a = 0;
				b = 0;
				cout <<  "a = " << a << endl;
				cout << "b = " << b << endl;
			}
};
int main(){
	Point p1,p2;
	return 0;
}
