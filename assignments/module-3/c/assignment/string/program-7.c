//write a program in c to copy on string in another string.

#include<stdio.h>
#include<string.h>
 
void stringCopy(char *s1,char *s2)
{
    for(int i=0;s2[i]=s1[i];i++);
    
    s2[i]='\0';
}
int main()
{
    char s1[100],s2[100]; 
    printf("Enter any string: ");
    gets(s1);
    stringCopy(s1,s2);
    
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
    return 0;   
}