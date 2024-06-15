//write a program to read any month number in integer and display the number of days for this month

#include<stdio.h>
int main()
{
    int N;
     printf("enter number of month : ");
     scanf("%d",&N);

    if (N == 1 || N == 3 || N == 5 
        || N == 7 || N == 8 || N == 10 
        || N == 12) { 
        printf("31 Days."); 
    } 
  
    // Check for 30 Days 
    else if (N == 4 || N == 6 
             || N == 9 || N == 11) { 
        printf("30 Days."); 
    } 
  
    // Check for 28/29 Days 
    else if (N == 2) { 
        printf("28/29 Days."); 
    } 
  
    // Else Invalid Input 
    else { 
        printf("Invalid Month."); 
    } 
} 
    