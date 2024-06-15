//Program of Armstrong Number in C Using For Loop & While Loop
// while loop

#include<stdio.h>

int isArmstrongForLoop(int number) {
    int originalNumber, remainder, result = 0;
    
    originalNumber = number;
    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }
    
    if (result == number) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int number = 153;
    
    if (isArmstrongForLoop(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}