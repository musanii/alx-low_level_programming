/*
 * File: 2-strlen.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * _strlen - Returns the length of a str
 * @str: The string to get the length of.
 *
 * Return : The length of @str.
 */
int _strlen( char *str)
{
	int len = 0;
	
	while (*str != '\0')
	{
		len++;
		*str++;
	}

	return (len);
}
