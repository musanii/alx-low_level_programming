 /*
  * File: 3-factorial.c
  * Author: Kevin Musanii
  */

#include "main.h"

/**
 * factorial - finds factorial of n.
 * @n: number.
 *
 * Return: factorial of a numbe , -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
