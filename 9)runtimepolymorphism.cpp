#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl; 
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl; 
    }
};

int main() {
    Shape shape;
    Circle circle;
    Rectangle rectangle;

    shape.draw();
    circle.draw();
    rectangle.draw();

    Shape* shapePtr = &circle;
    shapePtr->draw();
    shapePtr = &rectangle;
    shapePtr->draw();

    return 0;
}
