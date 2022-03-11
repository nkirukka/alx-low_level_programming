#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print lowercase alphabet but not e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 97; i < 123; i++)
if (i == 'e' || i == 'q')
continue;

else
putchar(i);
putchar(10);
}
