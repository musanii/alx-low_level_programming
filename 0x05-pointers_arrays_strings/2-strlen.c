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
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
