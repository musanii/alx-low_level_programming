/*
 * File: 4-pow_recursion.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * _pow_recursion - raise x power y.
 * @x: number.
 * @y: Exponent to raise to
 *
 *Return: Power of a number, -1 if power is less than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
