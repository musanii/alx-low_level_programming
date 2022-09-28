/*
 * File: 0-puts_recursion.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @4: The string to be printed.
 */
void _puts_recusrion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
