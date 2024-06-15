//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 

#include<stdio.h>
#include<string.h>
int main() {
    int str[100];
    printf("Enter a String : ");    
    gets(str);
    strrev(str);
    printf("\nReversed String is %s", str);     //reverse function in string.h header file
    return 0;
}