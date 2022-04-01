#include <stdlib.h>
#include "main.h"

/**
 * main - multiply 2 numbers
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 if error, 0 if success
 */




int main(int argc, char *argv[])
{

if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
int mul = atoi(argv[1]) *atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
