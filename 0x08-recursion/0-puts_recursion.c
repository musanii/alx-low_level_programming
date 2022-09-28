/*
 * File: 0-puts_recursion.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @4: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
