#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[10];
    fptr = fopen("calculator.c", "a");
    fclose(fptr);

    fptr = fopen("calculator.c", "r");
    fscanf(fptr, "%s", &ch);
    printf("%s", ch);
    fclose(fptr);
    return 0;
}