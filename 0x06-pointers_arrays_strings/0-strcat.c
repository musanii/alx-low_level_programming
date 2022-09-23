#include "main.h"

/**
 * _strcat - concatnate or appends  the src string to the dest string.
 * @dest: A pointer to the string to be appended to.
 * @src: The string to append.
 *
 * Return : concatnated string.
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
