#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @len: the number of nodes in the list.
 * @h: a pointer to the linked list.
 * @header: a copy of the pointer to tehh original linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *header = h;

	if (h == NULL)
		return (0);
	while (header != NULL)
	{
		header = header->next;
		len++;
	}
	return (len);
}
