//Find circumference of Triangle formula : triangle = a + b + c 

#include<stdio.h>

int main() 
{
    float side1, side2, side3, circumference;

    printf("Enter the length of side 1 of the triangle: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2 of the triangle: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3 of the triangle: ");
    scanf("%f", &side3);

    circumference = side1 + side2 + side3;

    printf("Circumference of the triangle: %.2f\n", circumference);

    return 0;
}