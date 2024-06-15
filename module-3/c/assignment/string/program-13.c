//. Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void removeNonAlphabeticChars(char *str) {
    int len = strlen(str);
    int j = 0;
    
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    removeNonAlphabeticChars(str);
    
    printf("Resulting string after removing non-alphabetic characters: %s\n", str);
    
    return 0;
}