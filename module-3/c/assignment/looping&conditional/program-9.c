// Write a program make a summation of given number (E.g., 1523 Ans: 11)


#include<stdio.h>
#include<stdlib.h>

int calculateSumOfDigits(int number) {
    int sum = 0;
    number = abs(number); // Convert number to its absolute value
    
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int number = 1523;
    
    int sumOfDigits = calculateSumOfDigits(number);
    
    printf("For the number: %d, the sum of digits is: %d\n", number, sumOfDigits);
    
    return 0;
}