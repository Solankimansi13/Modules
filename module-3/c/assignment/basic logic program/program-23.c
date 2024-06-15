//wap to calculate swap 2 numbers with using of multiplication and division. 

#include<stdio.h> 
  
int main()  
{  
    int a, b;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d %d", &a, &b);  
  
    printf("number is a = %d and b = %d\n", a, b);  
  
    a = a * b;  
    b = a / b;  
    a = a / b;  
  
    printf("After swapping a = %d and b = %d\n", a ,b);  
  
    return 0;  
} 