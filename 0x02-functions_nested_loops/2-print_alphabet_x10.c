#include <stdio.h>
#include "main.h"
int main()
{
int i = 10;
while (i < 10)
{
int j = 97;
while (j < 123)
{
_putchar(j);
j++;
}
_putchar(10);
i++;
}
return 0;
}
