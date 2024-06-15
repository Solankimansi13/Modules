/*
Write a C++ Program to find Area of Rectangle using inheritance 
*/

#include<iostream>
using namespace std;
// Base class
class Shape {
protected:
    double width;
    double height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    double getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);

    cout << "Area of Rectangle: " << rect.getArea() << std::endl;

    return 0;
}