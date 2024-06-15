// a b c d pettern 

#include<stdio.h>
int main()
{
    int i,j,k,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(char)(k+64));
        }
         printf("\n");
    }
    return 0;
}
