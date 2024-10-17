//wap to implement angle properties of a triangle
#include <iostream>
#include <string>
using namespace std;

bool triangle(double A, double B, double C) {
    return (A+B+C==180)&&(A>0)&&(B>0)&&(C>0);
}

string triangleType(double A, double B, double C) {
    if (A==90||B==90||C==90)
        return "Right";
    else if (A>90||B>90||C > 90)
        cout<<"Obtuse";
    else
        cout<< "Acute";
};

int main(){
    double A, B, C;
    cout<<"A valid triangle is formed by total sum of angles being equal to 180 degrees."<<endl;
    cout<< "Enter the three angles of the triangle:"<<endl;
    cout<<"Angle A: ";
    cin>>A;
    cout<<"Angle B: ";
    cin>>B;
    cout<<"Angle C: ";
    cin>>C;

    if (triangle(A, B, C)){
        cout<<"The angles form a valid triangle."<<endl;
        cout<<"The triangle is "<<triangleType(A,B,C)<<"."<< endl;
    }else{
        cout<<"The angles do not form a valid triangle." <<endl;
    }

    return 0;
}
