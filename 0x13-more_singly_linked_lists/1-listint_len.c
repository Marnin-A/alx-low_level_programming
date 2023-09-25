#include "lists.h"

/**
 *
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
