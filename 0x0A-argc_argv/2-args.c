#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: counts the argument recieved
 * @argv: array of the arguments
 *
 * Return: 0 when success is attened
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
