//.Convert days into months 

#include<stdio.h>
 int main()
{
   int months, days ;
   printf("Enter days=") ;
   scanf("%d", &days) ;

   months = days / 30 ;
   printf(" months = %d",months) ;

   return 0;
}