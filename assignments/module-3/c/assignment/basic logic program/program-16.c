//Convert country’s name in abbreviate form

#include<stdio.h>
#include<ctype.h>
int main(void)
 {
    char country_name[] = "United States of America";
    int i = 0;

    // Print the first character which is always capitalized
    printf("%c", toupper(country_name[0]));

    // Print the first character after space in each word
    while (country_name[i] != '\0') {
        if (country_name[i] == ' ') {
            i++;
            printf("%c", toupper(country_name[i]));
        }
        i++;
    }

    printf("\n");
  
    return 0;
}