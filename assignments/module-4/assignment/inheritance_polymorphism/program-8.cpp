/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */

#include<iostream>
using namespace std;
// Function to add two integers
int calculate(int a, int b) {
    return a + b;
}

// Function to add two doubles
double calculate(double a, double b) {
    return a + b;
}

// Function to subtract two integers
int calculateSubtract(int a, int b) {
    return a - b;
}

// Function to subtract two doubles
double calculateSubtract(double a, double b) {
    return a - b;
}

// Function to multiply two integers
int calculateMultiply(int a, int b) {
    return a * b;
}

// Function to multiply two doubles
double calculateMultiply(double a, double b) {
    return a * b;
}

// Function to divide two integers
int calculateDivide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Division by zero is undefined." << endl;
        return 0;
    }
}

// Function to divide two doubles
double calculateDivide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        cout << "Division by zero is undefined." << endl;
        return 0.0;
    }
}

int main() {
    int num1_int = 10, num2_int = 5;
    double num1_double = 10.5, num2_double = 2.5;

    // Addition
    cout << "Addition (int): " << calculate(num1_int, num2_int) << endl;
    cout << "Addition (double): " << calculate(num1_double, num2_double) << endl;

    // Subtraction
    cout << "Subtraction (int): " << calculateSubtract(num1_int, num2_int) << endl;
    cout << "Subtraction (double): " << calculateSubtract(num1_double, num2_double) << endl;

    // Multiplication
    cout << "Multiplication (int): " << calculateMultiply(num1_int, num2_int) << endl;
    cout << "Multiplication (double): " << calculateMultiply(num1_double, num2_double) << endl;

    // Division
    cout << "Division (int): " << calculateDivide(num1_int, num2_int) << endl;
    cout << "Division (double): " << calculateDivide(num1_double, num2_double) << endl;

    return 0;
}