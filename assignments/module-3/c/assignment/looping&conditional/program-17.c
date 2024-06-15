//. Calculate 5 numbers from user and calculate number of even and odd using of while loop 
#include<stdio.h>
int main()
{
    int i, num, even_num=0, odd_num=0, sum_even=0, sum_odd=0;
    printf("enter the 10 numbers :");
    
    i =0;

    while( i < 10)
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
    
        printf("\nnumber of even number is : %d ", even_num);
        printf("\nnumber odd odd number is : %d", odd_num);
        printf("\nsum of even number's : %d",sum_even);
        printf("\nsum of odd number's : %d",sum_odd);
    }
       i++;
    return 0;
}