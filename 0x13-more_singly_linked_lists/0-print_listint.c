#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * i: the number of elements in the linked list
 * h: pointer to the head of the linked list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (!h->n)
			printf("[0] (null)\n");
		else
			printf("%d \n", h->n);
		h = h->next;
	}
	return (i);
}
