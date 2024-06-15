/*
 Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0);

    cout << "Rectangle Area: " << myRectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << myRectangle.calculatePerimeter() << endl;

    return 0;
}