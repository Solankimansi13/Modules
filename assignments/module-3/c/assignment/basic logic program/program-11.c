//Find circumference of square formula : C = 4 * a

#include<stdio.h>
int main() 
{
    float side_length, circumference;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &side_length);

    circumference = 4 * side_length;

    printf("Circumference of the square: %.2f\n", circumference);

    return 0;
}