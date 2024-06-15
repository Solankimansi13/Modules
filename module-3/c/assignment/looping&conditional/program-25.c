// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 

#include<stdio.h>

int main()
 {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
     {
        sum += i * i;
    }

    printf("The sum of squares from 1 to %d is: %d\n", n, sum);

    return 0;
}