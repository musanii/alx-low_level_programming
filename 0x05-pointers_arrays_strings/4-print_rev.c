/*
 * File: 4-print_rev.c
 * Author: Kevin Musanii
 */

#include "4-main.c"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int len = 0, index;

	while(s[index++])
		len++;

	for(index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
