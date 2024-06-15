/* Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */


#include<stdio.h>
int main() 
{
    float monthly_salary, remaining_salary;
    float insurance_premium, loan_installment;

    printf("Enter the monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_premium = monthly_salary * 0.10;
    loan_installment = monthly_salary * 0.10;

    remaining_salary = monthly_salary - insurance_premium - loan_installment;

    printf("Monthly salary: $%.2f\n", monthly_salary);
    printf("Insurance premium: $%.2f\n", insurance_premium);
    printf("Loan installment: $%.2f\n", loan_installment);
    printf("Remaining salary: $%.2f\n", remaining_salary);

    return 0;
}