//if bill exceeds RS 800 the a surcharge of 18% will be charged and the minimum bill should be RS 256/-

#include<stdio.h>
int main()
{
    int bill_amount, charge;
     printf("\nenter total bill amount: ");
     scanf("%d",&bill_amount);

     if(bill_amount > 800 && bill_amount <= 256)
     {
            printf("\nyou bill amount is", charge + bill_amount);
             charge = (18*bill_amount)/100;
     }
        else{
             printf("\nenter valid number");
        }

      printf("\n **********THANK-YOU***********");

    return 0;
}