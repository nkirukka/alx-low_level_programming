#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet ten times
 *
 * Return: void
 */

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
return;
}
