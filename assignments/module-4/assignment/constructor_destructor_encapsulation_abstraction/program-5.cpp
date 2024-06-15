/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene. */

#include<iostream>
using namespace std;
class Triangle {
private:
    int side1, side2, side3;
public:
    Triangle(int s1, int s2, int s3) : side1(s1), side2(s2), side3(s3) {}
    
    void checkTriangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "This is an Equilateral Triangle." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "This is an Isosceles Triangle." << endl;
        } else {
            cout << "This is a Scalene Triangle." << endl;
        }
    }
};

int main() {
    Triangle t1(5, 5, 5);
    Triangle t2(4, 5, 5);
    Triangle t3(3, 4, 5);
    
    cout << "Triangle 1: ";
    t1.checkTriangleType();
    
    cout << "Triangle 2: ";
    t2.checkTriangleType();
    
    cout << "Triangle 3: ";
    t3.checkTriangleType();
    
    return 0;
}