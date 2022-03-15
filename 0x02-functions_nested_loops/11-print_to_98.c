#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 *
 * @n: n is an integer
 *
 * Return: integer
 */

void print_to_98(int n)
{
	for (n = n; n < 99; n++)
	{
		printf("%d, ", n);
	}
}
