/*
Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter. 
*/

#include<iostream>

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
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle myRectangle(length, width);

    cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;
    cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}