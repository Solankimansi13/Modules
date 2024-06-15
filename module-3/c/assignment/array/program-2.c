/*
 WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven) 
*/

#include<stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d", &first, &second);

    switch (operator) {
    case '+':
      printf("the sum is %d", first + second);
      break;
    case '-':
      printf("the subtraction is %d ", first - second);
      break;
    case '*':
      printf("the multiplication is %d ", first * second);
      break;
    case '/':
      printf("the divison is %d ", first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
   
