//Find Area of Cube formula 

#include<stdio.h>

int main()
 {
    float side_length, area;

    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side_length);

    area = 6 * side_length * side_length;

    printf("Surface area of the cube: %f\n", area);

    return 0;
}