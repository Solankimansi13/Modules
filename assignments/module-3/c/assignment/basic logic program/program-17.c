// Calculate person’s insurance premium based on salary

#include<stdio.h>
int main()  
{
    float salary, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    // Calculate insurance premium based on salary 
    premium = 0.10 * salary;

    printf("The insurance premium based on the person's salary is: %.2f\n", premium);

    return 0;
}