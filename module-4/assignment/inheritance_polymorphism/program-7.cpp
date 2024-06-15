/*
Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance 
*/

#include<iostream>
using namespace std;
// Base class
class A {
public:
    A() {
        cout << "Constructor of class A" << endl;
    }
};

// Derived class 1
class B : public A {
public:
    B() {
        cout << "Constructor of class B" << endl;
    }
};

// Derived class 2
class C : public B {
public:
    C() {
        cout << "Constructor of class C" << endl;
    }
};

int main() {
    C objC;
    return 0;
}