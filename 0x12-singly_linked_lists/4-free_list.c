#include "lists.h"

/**
 *free_list - fress linked list
 *@head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
