//24.Accept 5 employees name and salary and count average and total salary 

#include<stdio.h>

int main() {
char emp1, emp2, emp3, emp4, emp5;
int salary1, salary2, salary3, salary4, salary5;
float sum, average;

printf("enter 1st employee name and salary=");
scanf("%c,%d",emp1, &salary1);
printf("\nenter second employee name and salary=");
scanf("%c,%d",emp2, &salary2);
printf("\nenter third employee name and salary=");
scanf("%c,%d",emp3, &salary3);
printf("\nenter fourth employee name and salary=");
scanf("%c,%d",emp4, &salary4);
printf("\nenter fifth employee name and salary=");
scanf("%c,%d",emp5, &salary5);

sum = salary1+salary2+salary3+salary4+salary5;

average = sum / 5;

printf("\nThe sum of the employee is: %f\n", sum);

printf("The average of the salary is: %f\n", average);

return 0;

}