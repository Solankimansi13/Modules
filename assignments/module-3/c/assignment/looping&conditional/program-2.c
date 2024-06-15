//write a program to accept 5 number from user and display all number

#include<stdio.h>
int main()
{
    int number, i;
     for(i =0; i < 5; i++)
     {
        printf("\nenter number : ");
        scanf("%d",&number);
          printf("\n%d",number);
     }
      

    return 0;
}