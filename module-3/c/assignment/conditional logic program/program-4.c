// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2;   
    float res;  
    printf (" Choose an operator(+, -, *, /) to perform the operation in  Calculator \n ");  
    scanf ("%c", &opt); // take an operator  
    if (opt == '/' )  
    {  
        printf (" Division");  
    }  
    else if (opt == '*')  
    {  
        printf (" Multiplication");  
     }  
       
    else if (opt == '-')  
    {  
        printf ("Subtraction");  
     }  
        else if (opt == '+')  
    {  
        printf (" Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1); 
    printf (" Enter the second number: ");  
    scanf (" %d", &n2);   
      
    switch(opt)  
    {  
        case '+':  
            res = n1 + n2;   
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2; 
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1 * n2;
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2 == 0)   
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2;  
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
            break;  
        default:  
            printf (" invalid options ");               
    }  
    return 0;  
} 