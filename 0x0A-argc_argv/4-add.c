#include <stdlib.h>
#include "main.h"

/**
 * main - add positive numbers
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0(Success), 1(Error)
 */


int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc < 2)
{
printf("%d\n", 0);
}
else
{
for (i = 0; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
