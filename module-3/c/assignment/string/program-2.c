//write a program in c saprate individual character from string.

#include<stdio.h>
#include<string.h>

int main() {
   char str[90]=" ";
    int l=0;
    scanf("%s",str);
    while (str[l]!='\0'){
        printf("%c ",str[l]);
        l++;
    }
    
    return 0;
}