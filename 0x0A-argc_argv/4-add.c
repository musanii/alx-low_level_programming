#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to test if it's a number.
 * @argvv: a argvv
 *
 * Return: true iff entire string is a number.
 */
bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if ( !(agrvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all args given are numbers
 * @argc: argument counter
 * @argv: arguments
 *
 * Return: 0 on success , 1 if an argument wasnt a number.
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1) 
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[1]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	
	return (0);
}
