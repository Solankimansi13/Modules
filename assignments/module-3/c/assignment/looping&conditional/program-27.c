//1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n

#include<stdio.h>
int main() 
{
    int n;
    float sum = 0.0;
    int sign = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += sign * (float)i / (i + 1);
        sign *= -1;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}