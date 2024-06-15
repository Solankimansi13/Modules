/*
 Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) 
*/

#include<iostream>
#include<string>
using namespace std;
// Base class
class Person {
protected:
    string name;
    int age;

public:
    void initializePersonData(string pname, int page) {
        name = pname;
        age = page;
    }

    void readPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void writePersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
protected:
    double percentage;

public:
    void initializeStudentData(double p) {
        percentage = p;
    }

    void readStudentData() {
        readPersonData(); // Read the base class data
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void writeStudentData() {
        writePersonData(); // Write the base class data
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class 2
class Teacher {
protected:
    double salary;

public:
    void initializeTeacherData(double sal) {
        salary = sal;
    }

    void readTeacherData() {
        cout << "Enter Salary: $";
        cin >> salary;
    }

    void writeTeacherData() {
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class from Student and Teacher
class SchoolMember : public Student, public Teacher {
public:
    void readData() {
        readStudentData();
        readTeacherData();
    }

    void writeData() {
        writeStudentData();
        writeTeacherData();
    }
};

int main() {
    SchoolMember member;
    member.readData();
    cout << "\nData entered:\n";
    member.writeData();

    return 0;
}