//Write a C program to accept two integers and check whether they are equal or not 

#include<stdio.h>
int main()
{
    int num1, num2;

    printf("enter number 1=" );
    scanf("%d",&num1);
    printf("enter number 2= ");
    scanf("%d",&num2);

    if(num1 == num2)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}