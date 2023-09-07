#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds all the argv
 * @argc: counts argument
 * @argv: array of argiment
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("0\n");
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
