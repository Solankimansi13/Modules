//calculate the Factorial of a Given Number using while loop 

#include<stdio.h>
int main()
{
    int n,i=1,f=1;
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO CALCULATE FACTORIAL OF A NUMBER
    while(i<=n)
    {
        f=f*i;
        i++;
    }
     
    printf("\n The Factorial of %d is %d",n,f);
    return 0;;
}
