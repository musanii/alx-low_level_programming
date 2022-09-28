/*
 * File: 5-sqrt_recursion.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * find_sqroot - prints the squareroot of anumber.
 * @n: number or integer.
 * @root: test the root.
 *
 * Return: natural square root or -1 if not natural.
 */

int find_sqroot(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_sqroot(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n.
 * @n: number
 *
 * Return:  natural square root or -1 if otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);	
	return (find_sqroot(n, 0));
}
