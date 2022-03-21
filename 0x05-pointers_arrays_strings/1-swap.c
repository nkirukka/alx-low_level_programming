#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap int values
 *
 * @a: a is an integer
 * @b: b is an integer
 *
 * Return: oid
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
