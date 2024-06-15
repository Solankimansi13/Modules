// WAP to check whether a number is negative, positive or zero. 

#include<stdio.h>
int main()
{
    int num;

    printf("enter number =" );
    scanf("%d",&num);

    if(num<0)
    {
        printf("nagative number");
    }
    else if (num>0)
    {
        printf("positive number");
    }
    else if (num == 0)
    {
       printf("zero");
    }
    else
    {
        printf("please enter valid nuumber");
    }
    
   
    
    return 0;
}