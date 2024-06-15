/*
Write a program of to swap the two values using template 
*/

#include<iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 6.28;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "Before swapping: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;
    swap(dbl1, dbl2);
    cout << "After swapping: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;

    return 0;
}