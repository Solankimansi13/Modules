/*
Write a C++ Program display Student Mark sheet using Multiple inheritance 
*/

#include<iostream>
#include<string>
using namespace std;
// Base class
class Person {
protected:
    string name;

public:
    void setName(string pname) {
        name = pname;
    }
};

// Derived class 1
class Student : public Person {
protected:
    int rollNumber;
    int marks[5]; // Assuming 5 subjects

public:
    void setStudentDetails(int roll, int m1, int m2, int m3, int m4, int m5) {
        rollNumber = roll;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    void displayMarkSheet() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

// Derived class 2
class MarkSheet : public Student {
public:
    void displayStudentMarkSheet() {
        displayMarkSheet();
    }
};

int main() {
    MarkSheet student;
    student.setName("mansi");
    student.setStudentDetails(101, 85, 70, 90, 88, 95);
    student.displayStudentMarkSheet();

    return 0;
}