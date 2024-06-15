//Convert years into days and months 

#include<stdio.h>
int main()
{
    int years, months, days;

    printf("enterr number of years=");
    scanf("%d",&years);

    months = years*12;
    printf("\ntotal month is %d",months);

    days = months * 30;
    printf("\ntotal day of year is %d",days);



    return 0;
}