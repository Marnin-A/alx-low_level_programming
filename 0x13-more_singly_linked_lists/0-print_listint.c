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
	unsigned int i = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp)
	{
		printf("%d \n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
