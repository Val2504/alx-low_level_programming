#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}

	return (0);
}
