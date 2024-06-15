//calculator

#include<stdio.h>
int main()
{
    int a, b;
    printf("enter number = ");
    scanf("%d",&a);
    
    printf("enter number = ");
    scanf("%d",&b);

    printf("the sum is %d\n", a +b);
    printf("the subtraction is %d\n", a-b);
    printf("the multiplication is %d\n", a *b);
    printf("the divison is %d\n", a /b);

    return 0;
}