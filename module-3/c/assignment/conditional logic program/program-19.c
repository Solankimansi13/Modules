/*write a program to in c to calculate and print the electricity bill of given customerr.
the customerr id, name and unit consumed by the user should be capturedd from the keyboard to display the total 
amount to be paid to the customer . the charges are as follow:
20. unit                                21. charge/unit
22. upto 350                            23. @1.20
24. 350 and above but less than 600     25. @1.50
26. 600 nd above but less than 800      27. 1.80
28. 800 and above                       29. @2.00
*/

#include <stdio.h>
#include <string.h>
void main()
{
   int cust_id, unit_consumed;
   float charge, sur_charge=0, gramt,net_amt;
   char cust_name[25];
 
   printf("Input Customer ID :");
   scanf("%d",&cust_id);
   printf("Input the name of the customer :");
   scanf("%s",&cust_name);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit_consumed);
   if (unit_consumed <350 )
    charge = 1.20;
   else if (unit_consumed>=350 && unit_consumed<600)
        charge = 1.50;
   else if (unit_consumed>=600 && unit_consumed<800)
            charge = 1.80;
   else
            charge = 2.00;
 
   gramt = unit_consumed*charge;
   if (gramt>300)
    sur_charge = gramt*15/100.0;
   net_amt = gramt+sur_charge;
   if (net_amt  < 100)
    net_amt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",cust_id);
   printf("Customer Name                       :%s\n",cust_name);
   printf("unit Consumed                       :%d\n",unit_consumed);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",charge,gramt);
   printf("Surchage Amount                     :%8.2f\n",sur_charge);
   printf("Net Amount Paid By the Customer     :%8.2f\n",net_amt);
 
}