//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 

#include<stdio.h>
#include<stdlib.h>

int findMaxDigit(int number) {
    int maxDigit = 0;
    number = abs(number); // Convert number to its absolute value
    
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }
    
    return maxDigit;
}

int main() {
    int number = -1562;
    
    int maxDigit = findMaxDigit(number);
    
    printf("For the number: %d, the maximum digit is: %d\n", number, maxDigit);
    
    return 0;
}