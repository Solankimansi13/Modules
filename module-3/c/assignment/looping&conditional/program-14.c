//Accept 5 numbers from user and find those numbers factorials 

#include<stdio.h>
int main()
{
    int i, number, factorial=1;

    for(i=1; i <= 5; i++)
    {
    printf("\nenter a number = ");
    scanf("%d",&number);

    factorial = factorial * number;
    printf("\nfactorial of %d is %d", number, factorial);
    
    }
    return 0;
}