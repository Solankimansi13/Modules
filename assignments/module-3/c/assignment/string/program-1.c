//write a program in c to find length of a string without using library function

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length=0;
    
    printf("Enter a string: \n");
    scanf("%s",str);  
    
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string: %d",length);
     return 0;
}