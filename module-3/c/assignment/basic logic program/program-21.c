/* Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable*/

#include <stdio.h>
int main(void)
 {
    int num1, num2, temp;

    // Accept two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap with a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping with a third variable: num1 = %d, num2 = %d\n", num1, num2);

    // Swap without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping without a third variable: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}