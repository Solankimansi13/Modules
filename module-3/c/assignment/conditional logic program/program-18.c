//Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
int main()  
{  
    int cprice, sprice, plamt;  // Declare variables to store cost price, selling price, and profit/loss amount.

    printf("Input Cost Price: ");  // Prompt user for input of cost price.
    scanf("%d", &cprice);  // Read and store the cost price.
    printf("Input Selling Price: ");  // Prompt user for input of selling price.
    scanf("%d", &sprice);  // Read and store the selling price. +

    if(sprice > cprice)  // Check if selling price is greater than cost price.
    {  
        plamt = sprice - cprice;  // Calculate profit amount.
        printf("\nYou can book your profit amount : %d\n", plamt);  // Print profit message.
    }  
    else if(cprice > sprice)  // Check if cost price is greater than selling price.
    {  
        plamt = cprice - sprice;  // Calculate loss amount.
        printf("\nYou incurred a loss of amount : %d\n", plamt);  // Print loss message.
    }  
    else  // If neither profit nor loss.
    {  
        printf("\nYou are in a no profit, no loss condition.\n");  // Print message for no profit, no loss.
    }  
    return 0;
}  