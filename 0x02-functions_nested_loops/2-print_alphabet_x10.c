#include <stdio.h>
int main()
{
   int i = 10, j;
   while (i < 10)
   {
   int j = 97;
   while (j < 123)
   {
   putchar(j);
   j++;
   }
   putchar(10);
   i++;
   }
   return 0;
}
