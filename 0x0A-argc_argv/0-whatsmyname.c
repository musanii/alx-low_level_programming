/*
 * File: 0-whatsmyname.c
 * Author: Kevin Musanii
 */

#include <stdio.h>
#include "main.h"

/**
 * main - print name of program.
 * @argc: argument counter
 * @argv: pointer to the array of arguiments.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}


