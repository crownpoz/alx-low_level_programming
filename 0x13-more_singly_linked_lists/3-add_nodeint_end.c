#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds node at the end of a list
 *@head: address of new node
 *@n:integer to be added to the end
 *Return: address of new node or NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}

