#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @a: a is an integer
 *
 * Return: integer
 */

int print_last_digit(int a)
{
int last_d = a % 10;
if (a < 0)
{
last_d = last_d * -1;
}
_putchar(last_d + '0');
return (last_d);
}
