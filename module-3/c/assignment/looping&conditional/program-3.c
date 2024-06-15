/*write a program to take 10 number from user and find out below values
    a.how many even numberr are there
    B. how many odd number are there
    c. sum of even number
    d. sum of odd numbers
*/

#include<stdio.h>
int main()
{
    int i, num, even_num=0, odd_num=0, sum_even=0, sum_odd=0;
    printf("enter the 10 numbers :");
    
    for(i =0; i < 10; i++)
    {
        printf("number %d : " );
        scanf("%d",&num);

        if(num % 2 == 0)
        {
            even_num++;
            sum_even += num;
        }
        else
        {
            odd_num++;
            sum_odd += num;
        }    
    }
        printf("\nnumber of even number is : %d ", even_num);
        printf("\nnumber odd odd number is : %d", odd_num);
        printf("\nsum of even number's : %d",sum_even);
        printf("\nsum of odd number's : %d",sum_odd);
       
    return 0;
}