#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0;

	if (h == 0)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		if (tmp->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}

	return (count);
}
