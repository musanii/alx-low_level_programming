/*
 * File: 5-rev_string.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len  - index - 1] = tmp;
	}
}
