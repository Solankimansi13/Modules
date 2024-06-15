//WAP to find reverse of string using recursion 

#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a String : ");    
    gets(str);
    strrev(str);
    printf("\nReversed String is %s", str);     
    return 0;
}