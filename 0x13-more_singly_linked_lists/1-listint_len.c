#include "lists.h"

/**
 *listint_len - calculates number of elements in a list
 *@h: pointer to the next node
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
