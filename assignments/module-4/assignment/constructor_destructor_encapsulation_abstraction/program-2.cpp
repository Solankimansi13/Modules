/*
Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. 
*/

#include<iostream>
using namespace std;
class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int a, int b) : num1(a), num2(b) {}

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0) {
            return static_cast<double>(num1) / num2;
        } else {
            cerr << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }

    int multiply() {
        return num1 * num2;
    }
};

int main() {
    int a = 10;
    int b = 5;

    Calculator myCalculator(a, b);

    cout << "Addition: " << myCalculator.add() << endl;
    cout << "Subtraction: " << myCalculator.subtract() << endl;
    
    if (b != 0) {
        cout << "Division: " << myCalculator.divide() << endl;
    }

    cout << "Multiplication: " << myCalculator.multiply() << endl;

    return 0;
}