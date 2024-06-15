/*
Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation
*/

#include<iostream>
#include<string>
using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    char grade;
    Address addr;

public:
    void setDetails(string sname, std::string sClass, int roll, int sMarks, char sGrade) {
        name = sname;
        studentClass = sClass;
        rollNumber = roll;
        marks = sMarks;
        grade = sGrade;
    }

    void setGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else {
            grade = 'F';
        }
    }

    void setAddress(string street, string city, string state) {
        addr.street = street;
        addr.city = city;
        addr.state = state;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout << "Address: " << addr.street << ", " << addr.city << ", " << addr.state << endl;
    }
};

int main() {
    Student student1;
    student1.setDetails("Alice", "XII", 101, 85, 'B');
    student1.setAddress("123 Main Street", "Cityville", "StateABC");
    student1.setGrade();

    student1.displayInfo();

    return 0;
}