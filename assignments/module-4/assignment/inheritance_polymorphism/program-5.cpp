/*
Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <stdio.h>
using namespace std;
// Base class
struct Students {
    int rollNumber;
};

// Derived class 1
struct Test : Students {
    int marksSubject1;
    int marksSubject2;
};

// Derived class 2
struct Result : Test {
    int totalMarks;
};

int main(void) {
    struct Result studentResult;
    studentResult.rollNumber = 101;
    studentResult.marksSubject1 = 85;
    studentResult.marksSubject2 = 90;
    studentResult.totalMarks = studentResult.marksSubject1 + studentResult.marksSubject2;

    printf("Roll Number: %d\n", studentResult.rollNumber);
    printf("Marks Subject 1: %d\n", studentResult.marksSubject1);
    printf("Marks Subject 2: %d\n", studentResult.marksSubject2);
    printf("Total Marks: %d\n", studentResult.totalMarks);

    return 0;
}