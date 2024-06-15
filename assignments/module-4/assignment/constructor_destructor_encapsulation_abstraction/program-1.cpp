/*
Write a program to find the multiplication values and the cubic values using 
inline function
*/

#include<iostream>
using namespace std;
inline int calculateMultiplication(int a, int b)
{
    return a * b;
}

inline int calculateCube(int x) 
{
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int multiplicationResult = calculateMultiplication(num1, num2);
    cout << "Multiplication Result: " << multiplicationResult << endl;

    int number = 5;
    int cubeResult = calculateCube(number);
    cout << "Cube of " << number << ": " << cubeResult << endl;

    return 0;
}