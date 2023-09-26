#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: the head of the list
 * @next: hold the address of the next node.
 *
 * return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	return (0);
}
