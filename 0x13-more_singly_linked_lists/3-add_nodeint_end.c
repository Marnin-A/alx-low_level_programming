#include "lists.h"
#include <stdlib.h>

/*
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 *
 * @head: the address of the first node
 * @new: the new node to be added.
 * @temp: holds the address of the nodes until the last node is found. 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
