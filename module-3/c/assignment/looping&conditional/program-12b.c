//Program of Armstrong Number in C Using For Loop & While Loop
//for loop

#include<stdio.h>

int isArmstrongWhileLoop(int number) {
    int originalNumber, remainder, result = 0;
    
    originalNumber = number;
    
    for (;originalNumber != 0; originalNumber /= 10)
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
    }
    
    if (result == number) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int number = 153;
    
    if (isArmstrongWhileLoop(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}