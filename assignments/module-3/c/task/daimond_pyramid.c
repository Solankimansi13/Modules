#include<stdio.h>
int main()
{
    int i,j,no=1;
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ",no);
            no++;
        }
        printf("\n");
    }
            no--;
    for(i=5; i>=1; i--)
    {
        for(j=5; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            no--;
            printf("%d ",no);
        }
        printf("\n");
    }
    return 0;

}