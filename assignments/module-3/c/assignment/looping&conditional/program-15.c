//Calculate sum of 10 numbers using of while loop 

#include<stdio.h>
int main()
{
    int  i, sum = 0;

    printf("The first 10 natural number is :\n");

    i=1;

    while(i <= 10)
    {
    sum = sum + i;  
    printf("%d", i);
    }
    i++;
    return 0;
}

 
