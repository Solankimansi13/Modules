//Accept 5 numbers from user and perform sum of array

#include<stdio.h>
#include<stdlib.h>
main()
{
int arr[5],i,sum=0;
printf("      Enter Five numbers : ");
for(i=0;i<5;i++)
{
     scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
     sum=sum+arr[i];
}
printf("\n      The sum of the given 5 numbers is : %d\n",sum);
system("pause");
return 0;
}