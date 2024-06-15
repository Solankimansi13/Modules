/*
Write a C++ Program to show access to Private Public and Protected using 
Inheritance 
*/

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
    
    Base() : privateVar(1), protectedVar(2), publicVar(3) {}
    
    void display() {
        cout << "Private Variable (Base): Not accessible directly" << endl;
        cout << "Protected Variable (Base): " << protectedVar << endl;
        cout << "Public Variable (Base): " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        // privateVar is not accessible here as it is private in the base class
        cout << "Protected Variable (Derived): " << protectedVar << endl;
        cout << "Public Variable (Derived): " << publicVar << endl;
        
        
    }
};

int main() {
    Derived derivedObj;
    derivedObj.accessBaseMembers();
    
   
    
    derivedObj.display(); 
    
    return 0;
}