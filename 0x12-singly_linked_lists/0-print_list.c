#include "main.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Pointer to the list address
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
