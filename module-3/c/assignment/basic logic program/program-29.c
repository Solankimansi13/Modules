//Convert minutes into seconds and hours 

#include<stdio.h>
int main()
{
    int sec, min, hour;

    printf("enter total minutes=");
    scanf("%d",&min);

    printf("\ntotal second of given minutes is = %d",min*60);
    printf("\ntotal hours of given minutes is = %d",min/60);
    return 0;
}

