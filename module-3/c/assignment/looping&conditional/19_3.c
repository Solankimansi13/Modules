/*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

*/


#include<stdio.h>  
int main() {
   int i, j, spc, rows, k;  
   printf("Input number of rows : ");  
   scanf("%d", &rows);  
   spc = rows + 4 - 1;  

   for (i = 1; i <= rows; i++) {  //for rows
      for (k = spc; k >= 1; k--) {  // print spaces 
         printf(" ");
      }

      for (j = 1; j <= i; j++) {  // print*
         printf("* ");  
      }

      printf("\n");  // the next line for the next row.
      spc--;  //for the next row.
   }
    return 0;  
}
