#include "lists.h"
#include "stdio.h"

/**
 *print_listint - prints elements of a singly linked list
 *@h: pointer to the list
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
