#include "lists.h"

/**
 *print_list - prints list of elements in the linked list
 *@h:variable of type pointer to list_t list
 *
 *Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0], (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}

