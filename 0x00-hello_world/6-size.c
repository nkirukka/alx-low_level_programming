#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the size of various data types
 *
 * Return: Always (0) Success
 *
 */

int main(void)
{
char i;
int j;
long int k;
long long int l;
float m;
printf("Size of a char: %zu bytes(s)\n", sizeof(i));
printf("Size of a int: %zu bytes(s)\n", sizeof(j));
printf("Size of a long long: %zu bytes(s)\n", sizeof(k));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(l));
printf("Size of a float: %zu bytes(s)\n", sizeof(m));
return (0);
}
