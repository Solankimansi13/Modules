//Find Area of Square formula : a = a2 

#include <stdio.h>
int main() \
{
    float side_length, area;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side_length);
    area = side_length * side_length;
    printf("Area of the square: %f\n", area);
    return 0;
}