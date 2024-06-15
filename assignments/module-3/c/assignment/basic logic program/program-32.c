//Accept 2 numbers and find out its sum check it size 

#include<stdio.h>
int main()
{

    int a,b,sum,size;

    printf("enterr number 1= ");
    scanf("%d",&a);

    printf("\nenter number 2= ");
    scanf("%d",&b);
    
    sum=a+b;
    printf("\nthe sum of numberr1 and numberr 2 is %d= ",sum);

    size = sizeof(sum);
    printf("\nthe size of sum is %d",size);
    return 0;

}