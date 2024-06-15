// Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage


#include<stdio.h>
// Structure to represent an employee
struct Employee {
    int empno;
    char empname[100];
    char address[100];
    int age;
};

// Function to print employee information
void printEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {
    // Array of structures to store information for five employees
    struct Employee employees[5] = {
        {1, "Alice", "123 First Street", 25},
        {2, "Bob", "456 Second Street", 30},
        {3, "Charlie", "789 Third Street", 35},
        {4, "David", "101 Fourth Street", 40},
        {5, "Eve", "202 Fifth Street", 45}
    };

    // Print and display information for each employee
    for (int i = 0; i < 5; i++) {
        printf("Employee %d Information:\n", i+1);
        printEmployeeInfo(employees[i]);
    }

    return 0;
}