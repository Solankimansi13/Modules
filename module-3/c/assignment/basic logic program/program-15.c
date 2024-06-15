//Convert school’s name in abbreviated form

#include<stdio.h>
#include<ctype.h>
int main() 
{
    char school_name[100];
    int i = 0;

    printf("Enter the school's name: ");
    fgets(school_name, sizeof(school_name), stdin);

    // Print the first character which is always capitalized
    printf("%c", toupper(school_name[0]));

    // Print the first character after space in each word
    while (school_name[i] != '\0') {
        if (school_name[i] == ' ') {
            i++;
            printf("%c", toupper(school_name[i]));
        }
        i++;
    }

    printf("\n");
    
    return 0;
}