//WAP to print factorial of given number foe example= factorial of number 4=1*2*3*4


#include<stdio.h>
int main()
{
    int i, number, fact=1;

    printf("enter number = ");
    scanf("%d",&number);

    for(i=1; i <= number; i++)
    {
        fact = fact*i;
    }
    printf("\n factorial of %d is = %d",number,fact);
}