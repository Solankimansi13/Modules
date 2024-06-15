//Calculate compound interest 

#include<stdio.h>
#include<math.h>
int main() 
{
    float principal, rate, time, n;
    float amount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in decimal form): ");
    scanf("%f", &rate);

    printf("Enter the number of years: ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%f", &n);

    amount = principal * pow(1 + (rate / n), n * time);

    printf("The compound interest after %0.2f years is: %0.2f\n", time, amount - principal);

    return 0;
}