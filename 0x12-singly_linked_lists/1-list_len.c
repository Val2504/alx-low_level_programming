#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = NULL;
	size_t count = 0;

	if (h == 0)
	{
		return (0);
	}

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);
}
