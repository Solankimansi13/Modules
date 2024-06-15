// WAP to convert years into days and days into years 

#include<stdio.h>
int main()
{
    int days, years;
     printf("enter total years=");
     scanf("%d",&years);
     days = years*365;
     printf("\nenter total days= %d",days);

    printf("\nenter total days=");
    scanf("%d",&days);
     years=days/365;
     printf("convert days in years %d",years);
     

}