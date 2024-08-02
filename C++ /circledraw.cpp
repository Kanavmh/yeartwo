#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw() = 0;
};

class Circle : public Shape{
    float radius;
    public:
    Circle(float radius){
        this->radius = radius;
        cout << "Circle with radius " << radius << endl;
    }
    void draw()
    {
        cout << "Drawing a circle with radius " << radius << endl;
    }
};

int main()
{
    Circle C1(34);
    C1.draw();
    return 0;
}
