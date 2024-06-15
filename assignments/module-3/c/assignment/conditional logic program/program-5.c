//Check Number Is Positive or Negative 

#include <stdio.h>
int main() 
{

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("zero");
        else
            printf(" negative number.");
    } 
    else
        printf("positive number.");

    return 0;
}