#include <iostream>
#include <string>
using namespace std;

class shape{
    public:
    
    void print(){
        cout<<"I am a shape"<<endl;
    }
};
class circle{ protected: int radius;
    public:
    circle(){radius=0;}
    circle(int r){radius=r;}
    circle(circle &obj){radius=obj.radius;}
    float area(){return (3.14*radius*radius);}
    double circum(){return (2*3.14*radius);}
    int getdia(){return (2*radius);}
};
class semicircle : public circle{
        public:
        semicircle() : circle() {}
        semicircle(int r) : circle(r) {} //parameterised
        float area(){return (0.5*3.14*radius*radius);}
        float circum(){return 3.14*radius;}
};
int main() {
    shape s1;
    s1.print();
    
    circle c1;
    c1.getdia();
    cout<<c1.getdia()<<endl;
    
    circle c3(c1);
    cout<<c3.getdia()<<endl;
    
    semicircle sc1;
    semicircle sc2;
    
    return 0;
}
