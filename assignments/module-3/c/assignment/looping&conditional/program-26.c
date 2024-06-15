// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include<stdio.h>
int main() 
{
    int n, sum = 0, series_sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        series_sum += i;  
        sum += series_sum;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}