/*
 * File: 1-swap.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: the first int to be swapped
 * @b: The second int to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
