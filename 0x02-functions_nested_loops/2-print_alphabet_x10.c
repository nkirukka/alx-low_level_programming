#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void)
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
