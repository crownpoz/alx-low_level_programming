#include "lists.h"

/**
 *add_nodeint - adds new node at beginning of list
 *@head: address of first node of a list
 *@n: integer to insert in new node
 *Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
