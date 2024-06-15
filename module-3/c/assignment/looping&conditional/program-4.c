//write a program to print table up to given numbers

#include<stdio.h>
int main()
{
    int number , i;

    printf("enter number : ");
    scanf("%d",&number);

    for(i =1; i<=10; i++)
    {
        printf("\n %d * %d = %d",number, i, number * i);
    }
    return 0;
}