/* 6.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>
int main()
{
    int cel;

    printf("enter temperature in celtigrade = ");
    scanf("%d", &cel);

    if (cel < 0)
    {
        printf("\nFreezing weezther");
    }
    else if ((cel >= 0) && (cel < 10))
    {
        printf("\nVery Cold weather");
    }
    else if ((cel >= 10) && (cel < 20))
    {
        printf("\nthe cold weather");
    }
    else if ((cel >= 20) && (cel < 30))
    {
        printf("\nnormal in temp");
    }
    else if ((cel >= 30) && (cel < 40))
    {
        printf("\nits hot");
    }
    else
    {
        printf("\nits verry hot");
    }

    return 0;
}