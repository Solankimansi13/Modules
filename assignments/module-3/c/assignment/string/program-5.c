//write a program in c to compare to string without using string library function.

#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,n=0,r=0,j=0;
        scanf("%s",a);
        scanf("%s",b);
            while(a[n]!='\0')
                n++;
            while(b[r]!='\0')
                r++;
    if(n==r)
          {
        for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        j++;
    }
        }
    if(j==r)
        printf("same");
    else
            printf("not same");
return 0;
}