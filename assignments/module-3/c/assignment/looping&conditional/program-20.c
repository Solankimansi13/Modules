// print 1 to 50


#include<stdio.h>
int main()
{
   int count = 50;
   int columns = 10;

   for (int i = 0; i < count; i++)
   {
       printf("%9d", i);

       if ((i % columns) == 9)
       {
           printf("\n");
       }
   }

   return 0;
}