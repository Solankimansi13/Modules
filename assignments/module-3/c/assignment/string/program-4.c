//write a program in c to count the total number of words in string.

#include<stdio.h>
#include<string.h>
 int main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')

            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
    return 0;
}