/*
 Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading 
Rectangle: Area * 
breadth Triangle: ½ 
*Area* breadth Circle: 
Pi * Area *Area
*/

#include<iostream>
using namespace std;

const double Pi = 3.14159;

// Function to calculate the area of a rectangle
int calculateArea(int length, int breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return Pi * radius * radius;
}

int main() {
    int length, breadth;
    double base, height, radius;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculateArea(length, breadth) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculateArea(base, height) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculateArea(radius) << endl;

    return 0;
}