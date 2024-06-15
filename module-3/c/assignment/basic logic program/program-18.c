//Calculate person’s Annual salary 

#include<stdio.h>
int main() 
{
    float monthly_salary, annual_salary;

    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthly_salary);

    // Calculate annual salary by multiplying monthly salary by 12
    annual_salary = monthly_salary * 12;

    printf("The person's annual salary is: %.2f\n", annual_salary);

    return 0;
}