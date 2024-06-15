//Accept marks from user and check pass or fail 

#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;

    printf("---------------subject marks------------------");
    
    printf("\nPhysics = ");
    scanf("%d",&sub1);
    printf("\nphyscology = ");
    scanf("%d",&sub2);
    printf("\nCnchemistry = ");
    scanf("%d",&sub3);
    printf("\nEnglish = ");
    scanf("%d",&sub4);
    printf("\ngujrati = ");
    scanf("%d",&sub5);

    total= sub1+ sub2 + sub3 + sub4 + sub5;

    printf("\ntotal = %d",total);

    if((total>35) && (sub1 >= 35) && (sub2 >= 35) && (sub3 >= 35) && (sub4 >= 35) && (sub5 >=35))
    {
        printf("\nResult = PASS");
    }
    else
    {
        printf("\nResult = FAIL");
    }

    
    return 0;
}