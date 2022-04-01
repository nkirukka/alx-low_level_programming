#include <stdlib.h>
#include "main.h"


/**
 * main - print all arguments
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: Always 0(Succes)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
