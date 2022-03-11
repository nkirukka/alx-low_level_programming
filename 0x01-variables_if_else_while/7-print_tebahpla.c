#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 122; i > 96; i--)
putchar(i);
putchar(10);
return (0);
}
