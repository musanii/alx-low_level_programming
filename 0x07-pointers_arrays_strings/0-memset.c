#include "main.h"

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i - 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
