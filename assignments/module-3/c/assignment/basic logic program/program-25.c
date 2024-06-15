//Accept 5 expense from user and find average of expense 

#include<stdio.h>
int main()
{
    int a, b, c, d, e, average, total;

    printf("enter expense=\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total = a + b + c + d + e;
    printf("total expense is %d\n",total);

    average= total/5;
    printf("avrage is %d\n",average);
    return 0;
}