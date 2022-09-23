/*
 * File: 0-strcat.c
 * Author: Kevin Musanii
 */

#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 * 		null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatnated upon.
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
