#include "main.h"

/**
* factorial - return factorial of given number
*
* @n: n is an integer
*
* Return: -1 if less than zero, 1 if 0, n if above 0
*/

int factorial(int n)
{
  if (n < 0)
  {
      return -1;
  }
  if (n ==0)
  {
      return 1;
  }

  else
  {
      return n * factorial(n-1);
  }
}
