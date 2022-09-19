/*
 * File: 4-print_rev.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{

	int len = 0;
	int index;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(*s);
		s--;
	}
	
	_putchar('\n');
}
