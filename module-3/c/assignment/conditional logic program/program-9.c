//C Program to Check Uppercase or Lowercase or Digit or Special Character


#include<stdio.h>
int main()
{
          char c;
    
       
         printf("Enter any character : ");
         scanf("%c",&c);

    
        if(c>='A' && c<='Z')
             printf(" an upper case");
        
 
        else if(c>='a' && c<='z')
            printf(" lower case");
       
    
       else if(c>='0'&& c<='9')
           printf(" not a character");
      
         else
          printf(" special character");
    
   return 0;

}


 

