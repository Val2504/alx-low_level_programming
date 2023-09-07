#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: used to print the number of argument
 * @argv: array of the argument
 *
 * Return: 0 when susseful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
		printf("%d\n", argc - 1);

	return (0);
}
