#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: counts the the amount
 * @argv: array of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, small_coin;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cent = atoi(argv[1]);

		for (; cent > 0;)
		{
			if (cent >= 25)
				cent = cent - 25;
			else if (cent >= 10)
				cent = cent - 10;
			else if (cent >= 5)
				cent = cent - 5;
			else if (cent >= 1)
				cent = cent - 1;
			else if (cent >= 2)
				cent = cent - 2;
			small_coin = small_coin + 1;
		}
		printf("%d\n", small_coin);
	}

	return (0);
}
