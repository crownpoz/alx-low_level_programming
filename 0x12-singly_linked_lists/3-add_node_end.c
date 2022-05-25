#include "lists.h"
/**
 *add_node_end -adds a new node at the end of the list
 *@head:address of first node in list
 *@str:address of string to insert to list
 *Return:address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int lent = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[lent])
		lent++;
	temp->len = lent;
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
