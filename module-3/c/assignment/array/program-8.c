//WAP to reverse a string and check that the string is palindrome or not 
//Write a program of structure employee that provides the following 
//a. information -print and display empno, empname, address 
//andage 

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    char temp;
    
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    
    return 1; // Palindrome
}

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
}

int main() {
    // Reverse a string and check if it is a palindrome
    char str[] = "madam";
    reverseString(str);
    
    printf("Reversed String: %s\n", str);
    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    // Employee structure example
    struct Employee emp1 = {1234, "John Doe", "123 Main Street", 30};
    
    printf("\nEmployee Information:\n");
    printEmployeeInfo(emp1);
    
    return 0;
}