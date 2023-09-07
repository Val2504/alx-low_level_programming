#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: counts the number of argument, but will not be used
 * @argv: array of argument
 *
 * Return: 0 when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
