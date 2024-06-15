/*
Write a program to find the max number from given two numbers 
using friend function
*/

#include<iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number() : num(0) {}

    Number(int n) : num(n) {}

    friend int findMax(Number num1, Number num2);
};

int findMax(Number num1, Number num2) {
    return (num1.num > num2.num) ? num1.num : num2.num;
}

int main() {
    Number num1(5);
    Number num2(10);

    std::cout << "The maximum of " << num1.num << " and " << num2.num << " is: " << findMax(num1, num2) << std::endl;

    return 0;
}