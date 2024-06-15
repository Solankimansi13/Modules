/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */

#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID) : name(empName), employeeID(empID) {
        salary = 0.0; // Initialize salary
    }
    
    void calculateSalary(int performanceScore) {
        if (performanceScore >= 90) {
            salary = 50000;
        } else if (performanceScore >= 80) {
            salary = 40000;
        } else if (performanceScore >= 70) {
            salary = 30000;
        } else {
            salary = 20000;
        }
    }
    
    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("Alice", 1001);
    emp1.calculateSalary(85);
    emp1.displayEmployeeDetails();
    
    return 0;
}