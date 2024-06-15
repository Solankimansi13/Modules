// 1 2 3 6 9 18 27 54... 

#include<stdio.h>

int main() {
    int n;
    int num = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            num *= 3;
        }
        printf("%d ", num);
        num++;
    }

    return 1;
}