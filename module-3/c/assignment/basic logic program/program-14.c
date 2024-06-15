//Find ascii value of given number

#include<stdio.h>
int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    char ascii_char = number;

    printf("The ASCII value of %d is: %c\n", number, ascii_char);

    return 0;
}