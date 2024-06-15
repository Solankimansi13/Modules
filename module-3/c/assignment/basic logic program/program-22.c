/* Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P
*/

#include <stdio.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    // Accept values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the amount
    amount = principal * (1 + rate / 100 * time);

    // Calculate the compound interest
    compound_interest = amount - principal;

    printf("Principal Amount: $%.2f\n", principal);
    printf("Annual Interest Rate: %.2f\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Amount after %0.2f years: $%.2f\n", time, amount);
    printf("Compound Interest: $%.2f\n", compound_interest);

    return 0;
}